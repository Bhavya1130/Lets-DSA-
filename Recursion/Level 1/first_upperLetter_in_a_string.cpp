#include <bits/stdc++.h>
using namespace std;

char firstUpper(string s, int i) {
    if(i == s.length())
        return '&';

    if(int(s[i]) >= 65 && int(s[i]) <= 90 )
        return s[i];

    return firstUpper(s, i+1);
}

int main() {
    string s;
    getline(cin, s);
    cout << s << endl;

    char ans = firstUpper(s, 0);

    if(ans != '&') {
        cout << ans << " is the first uppercase letter";
    }
    else
        cout << "No uppercase letter found";
        
    return 0;
}
