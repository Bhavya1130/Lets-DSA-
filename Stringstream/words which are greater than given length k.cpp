#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence: ";
    cin.clear();
    getline(cin, str);
    
    stringstream s(str);
    int k, count=0;
    cout << "Enter size of word to print words of same size or greater: ";
    cin >> k;
    string temp;
    while(s >> temp){
        if(temp.size()>=k)
            cout << temp << endl;
    }

    return 0;
}
