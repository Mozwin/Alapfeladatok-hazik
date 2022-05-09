#include <iostream>

using namespace std;

int main()
{
    string x;
    getline(cin, x);
    int szamjegyek=0;
    int nagybetu=0;
    int kisbetu=0;
    int i=0;
        while(x[i]){
            if( isdigit(x[i]))
                szamjegyek ++;
            if(isupper(x[i]))
                nagybetu ++;
            if( islower (x[i]))
                kisbetu ++;
            i++;
        }
    cout << szamjegyek<< nagybetu<< kisbetu << endl;
    return 0;
}
