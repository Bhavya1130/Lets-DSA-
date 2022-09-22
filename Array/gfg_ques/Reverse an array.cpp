#include <iostream>
using namespace std;

int main()
{
    int n, temp, x;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    x=n;
    
    for(int i=0; i<n/2; i++){
        temp = a[x-1];
        a[x-1] = a[i];
        a[i] = temp;
        x--;
    }
    
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
