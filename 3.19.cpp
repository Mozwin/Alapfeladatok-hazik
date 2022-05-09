#include <iostream>

using namespace std;

bool prim(int x){
    if(x==1)
        return false;
   for(int i=2; i<=(x/2); i++){
        if( x%i==0)
            return false;}
    return true;

}

int main()
{
    int a;
    cin>>a;
    if (prim(a)==true)
            cout<< "igaz";
    else
       cout<< "hamis";
    return 0;
}
