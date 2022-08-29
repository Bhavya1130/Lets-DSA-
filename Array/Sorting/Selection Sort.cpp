#include <iostream>
using namespace std;

int main()
{
    cout << "Do visit: https://github.com/Bhavya1130";
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int a[n], min;
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int temp = a[i];
        a[i]=a[min];            
        a[min] = temp;
    }
    cout << "\nSorted array: ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
