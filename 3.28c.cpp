#include <iostream>

using namespace std;

int main()
{
    int x;
    int szamlal=0;
    int indul=0;
    string s;
    string keres;

    cin >> keres >> ws >> x >> ws;
    for (int i=0; i<x; i++){
        getline(cin, s );
        while (s.substr(indul, s.length()).find(keres)!= s.npos){
            szamlal++;
            indul+=s.substr(indul, s.length()).find(keres)+1;
        }
        indul=0;
    }
    cout << szamlal << endl;
    return 0;
}
