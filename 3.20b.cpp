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
    int k;
    cin>> k;
    int i=2;

while(i<k){

        if (prim(i)==true){
        cout<< i<< " ";
        }
        i++;
    }
    return 0;
}

