#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (a[j] == i) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
        {
            a[i] = -1;
        }
    }
    
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
