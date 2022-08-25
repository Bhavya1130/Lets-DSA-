#include <iostream>
using namespace std;

int main()
{
    cout << "Do Visit: https://github.com/Bhavya1130";
    int n;
    cout << "Number of elements in the array: ";
    cin >> n;
    int arr[n], k, flag=-1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> k;
    for(int i =0; i<n; i++){
        if(arr[i]==k){
            cout << k <<" found at index: " << i;
            flag = 0;
        }
    }
    if(flag==-1)
        cout << k << " not found in the array";
    return 0;
}
