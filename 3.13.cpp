#include <iostream>
#include <cmath>
using namespace std;



int main()

{ double a;
      cin>>a;
    double osszeg;
    while(a>0){
        osszeg=osszeg+sqrt(a);
        cin>>a;
    }

    cout << osszeg << endl;
    return 0;
}
