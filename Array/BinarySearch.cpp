#include <iostream>
using namespace std;

int main()
{
    cout << "Do Visit: https://github.com/Bhavya1130";
    int n;
    cout << "Number of elements in the array: ";
    cin >> n;
    cout << "\n*****Enter elements in ascending order only*****\n";
    int arr[n], num, s, l, mid=0, flag = -1;
    cout << "\nEnter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "\nEnter element to search: ";
    cin >> num;
    
    s=0;
    l=n;
    while(s<=l){
        mid = (s + l)/2;
        if(num == arr[mid]){
            cout << "\nElement found at index: " << mid;
            flag = 0;
            break;
        }
        
        else if(num > arr[mid]){
            s = (mid + 1);
        }
        
        else {
            l = (mid - 1);
        }
    }
    
    if(flag == -1){
        cout << "Element not found";
    }
    return 0;
}
