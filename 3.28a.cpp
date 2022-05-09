#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    int n;
    cin>>n;
    int szamlal=0;
    getline(cin, x);

   for(int i=0; i<n; i++){

        if(x.find("alma") > 0) {
            szamlal++;
        }
        getline(cin, x);
    }

    cout << szamlal << endl;
    return 0;
}
