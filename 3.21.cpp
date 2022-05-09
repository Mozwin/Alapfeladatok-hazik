#include <iostream>

using namespace std;

int main()
{
    string x;
    getline(cin, x);
    int szamlal=0;
    int i=0;
    while(x[i]){

                if( x[i]=='a')
            szamlal++;
                i++;
    }


    cout << szamlal << endl;
    return 0;
}
