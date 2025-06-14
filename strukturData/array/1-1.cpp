#include <iostream>
using namespace std;
int main() 
{
    int a[16];
    cout << &a << endl;
    for (int i=0; i<16; i++) {
       cout << &a[i] << endl;
    }

    double e[16];
    cout << &e << endl;
    for (int i=0; i<16; i++) {
       cout << &e[i] << endl;
    }
    

    // int n;
    // cin >> n;
    // string arr[3] = {"/", "\\", " "};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int k = n; i <= k; k--)
    //     {
    //        cout << arr[2];
    //     }
    //     cout << arr[0];
    //     for (int j = 0; j < i * 2; j++)
    //     {
    //         cout << arr[2];
    //     }
    //     cout << arr[1];
    //     cout << endl;
    // }

    // int array[2][3];

    return 0;
}



