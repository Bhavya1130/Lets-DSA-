#include <iostream>
using namespace std;

int main()
{
    cout << "Do visit: https://github.com/Bhavya1130 ";
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
