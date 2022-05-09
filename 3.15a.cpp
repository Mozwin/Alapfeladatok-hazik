#include <iostream>

using namespace std;

int main()

{   int ugras=0;
    int szamsor[5];
    for(int i=0; i<5; i++)
        cin>>szamsor[i];
    for(int j=1; j<5; j++){
        if((szamsor[j]-szamsor[j-1])>ugras)
            ugras=szamsor[j]-szamsor[j-1];

    }

    cout << ugras << endl;
    return 0;
}
