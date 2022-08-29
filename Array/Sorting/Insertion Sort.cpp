#include <iostream>
using namespace std;

int main(){
    cout << "Do visit: https://github.com/Bhavya1130";
    int n;
    cout << "Enter no of elements in array: ";
    cin >> n;
    int a[n], j;
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i=1; i<n; i++){
        int temp = a[i];
        j = i-1;
        while(j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    
    cout << "Sorted Array: ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
