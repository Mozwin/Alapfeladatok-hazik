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

void keres(vector<adatok>& v, string n) {
    bool van = false;
    for (int i = 0; i < (int)v.size(); i++) {
        if (v[i].nev == n) {
            cout << v[i].ev << "." << v[i].honap << "." << v[i].nap << "." << endl;
            van = true;
        }
    }
    if (!van) {
        cout << "nincs";
    }
}

int main()
{
    string nev;
    getline(cin, nev);
    vector<adatok> v;
    ifstream f("szuletes.txt");
    if (!f.good())
        cout << "Nem sikerült megnyitni" << endl;
    beolvas(f, v);
    keres(v, nev);

    return 0;
}
