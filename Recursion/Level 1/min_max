#include <bits/stdc++.h>
using namespace std;

int findMin(int a[], int n) {
    if(n==1)
        return a[0];
    
    return min(a[n-1], findMin(a, n-1));
}

int findMax(int a[], int n){
    if(n==1)
        return a[0];
    
    return max(a[n-1], findMax(a, n-1));
}

int main() {
    int n;
    cin >> n;
    
    int a[n];

    for(auto &p : a){
        cin >> p;
    }

    int min_e = findMin(a, n);
    int max_e = findMax(a, n);

    cout << "Min = " << min_e << "\nMax = " << max_e << endl;
    return 0;
}
