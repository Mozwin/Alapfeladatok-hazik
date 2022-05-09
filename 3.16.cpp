#include <iostream>

using namespace std;




int main()
{   int a;
    cin>>a;
    int szamsorozat[a];
    for(int i=0; i<a; i++){
        cin>>szamsorozat[i];
    }
    int ugras=0;
    double osszeg;

    for(int j=1; j<a; j++){
        ugras=(szamsorozat[j]-szamsorozat[j-1]);
        osszeg=osszeg+ugras;
    }

    cout << osszeg/(a-1) << endl;
    return 0;
}
