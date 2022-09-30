#include <iostream>
using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            a[count] = a[i];
            count++;
        }
    }
    for(int i=count; i<n; i++){
        a[i]=0;
    }
    for(int i=0; i<n; i++){
        cout<<a[i];
    }

    return 0;
}
