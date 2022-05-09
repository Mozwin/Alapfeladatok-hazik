#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=1;
    cin>>a;
    int szamok[a];
    for(int i=0; i<a; i++)
        cin >> szamok[i];
    bool novekvo= true;
    while (novekvo && b<a){
        if(szamok[b]<szamok[b-1]){
            novekvo=false; }

    b++;
    }

    if(novekvo==true){
        cout<< "Novekvo";}
    else{
        cout<< "Nem novekvo";}
    return 0;
}
