#include <iostream>
#include <string>


using namespace std;

int main()
{
    string x;
    int n;
    string a;
    getline(cin, a);
    cin>>n;
    int szamlal=0;
    int hossz;


   for(int i=0; i<=n; i++){
        getline(cin, x);
        hossz=(int)x.length();
        int pozicio=x.find(a);
        if(pozicio+1<hossz)
            szamlal++;

    }

    cout << szamlal << endl;
    return 0;
}
