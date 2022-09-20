#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T>0){
	    int X, Y, P=0;
	    cin >> X >> Y;
	    P = (10*X + 90*Y);
	    cout << P << endl;
	    T--;
	}
	return 0;
}
