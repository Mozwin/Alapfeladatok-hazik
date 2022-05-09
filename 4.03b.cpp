#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct adatok {
    string nev;
    int ev, honap, nap;
};

void beolvas(ifstream& f, vector<adatok>& v) {
    adatok seged;
    char szemet;
    while (f.good()) {
        getline(f, seged.nev, ',');
        f >> seged.ev >> szemet >> seged.honap >> szemet >> seged.nap >> szemet >> ws;
        v.push_back(seged);
    }

}

void keres(vector<adatok>& v) {
   int minimum=3000;
   int maximum=0;
    for (int i = 0; i < (int)v.size(); i++) {
        if (v[i].ev >maximum) {
            maximum=v[i].ev;
        }
        if(v[i].ev< minimum){
            minimum=v[i].ev;
        }
    }
    for (int j=0; j < (int)v.size(); j++){
        if (v[j].ev==minimum)
            cout<< v[j].nev<< "legidosebb "<< endl;
        if (v[j].ev==maximum)
            cout<< v[j].nev <<"  legfiatalabb"<< endl;
    }

}

int main()
{

    vector<adatok> v;
    ifstream f("szuletes.txt");
    if (!f.good())
        cout << "Nem sikerült megnyitni" << endl;
    beolvas(f, v);
    keres(v);

    return 0;
}
