#include <iostream>

using namespace std;

int main()
{
    int a, minimum, maximum;
    int n;
    cin>>n;

    minimum = 200;
    maximum = -200;
    for(int i=0; i<n; i++){
cin >> a;
        if(a < minimum)
            minimum = a;
        if(a > maximum)
            maximum = a;


    }


    cout << minimum <<' '<< maximum << endl;
    return 0;
}
