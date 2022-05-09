#include <iostream>

using namespace std;

int main()
{
    int szamok[3];
    for(int i=0; i<3; i++)
    cin >> szamok[i];
    if (szamok[1]>szamok[0]& szamok[2]>szamok[1]) {
        cout << "Novekvo" << endl; }
    else{
        cout <<" Nem novekvo"<<endl;}
    return 0;
}
