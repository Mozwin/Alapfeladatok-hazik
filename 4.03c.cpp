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

int keres(vector<adatok>& v) {
   int szamlal;
    for (int i = 0; i < (int)v.size(); i++) {
        if (v[i].honap ==1) {
            szamlal++; }

    }
    return szamlal;
}

int main()
{
    int szamlal;

    vector<adatok> v;
    ifstream f("szuletes.txt");
    if (!f.good())
        cout << "Nem sikerült megnyitni" << endl;
    beolvas(f, v);
    szamlal=keres(v);
    cout << szamlal ;

    return 0;
}
