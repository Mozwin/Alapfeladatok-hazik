#include <iostream>

using namespace std;

int main()
{
    string x;
    getline(cin, x);

    int i=0;
    int j=0;
    int maximum=0;
    int szamlal=0;
    char maxchar;

        while(x[i]){
            char a=x[i];
            while(x[j]){
                if(x[j]==a)
                    szamlal++;
                if (szamlal>maximum){
                    maximum=szamlal;
                    maxchar=x[j];}
            j++;

            }

        i++;
        }
    cout << maxchar << endl;
    return 0;
}
