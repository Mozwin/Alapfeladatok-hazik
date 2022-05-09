#include <iostream>
#include <cmath>

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
    int n;
    cin>> n;
    int i=2;
    int szamlal=0;

while(szamlal<n){

        if (prim(i)==true){
        szamlal++;
        cout<< i<< " ";
        }
        i++;
    }
    return 0;
}
