#include <iostream>
using namespace std;
#define MAX 10

class stack{
    private:
    int top;
    
    public:
    int a[MAX];
    
    stack(){
        top = -1;
    }
    
    bool push(int x);    // Function to insert element in the stack
    bool isEmpty();      // Function to check stack is empty or not
    int peek();          // Function that returns the top element
    int pop();           // Function that returns each element or traverse the stack
};

bool stack:: push(int x){
    if(x >= (MAX - 1)){
        cout << "Stack is full!";
        return false;
    }
    else{
        top++;
        a[top] = x;
        return true;
    }
}

int stack:: pop(){
    if(top<0){
        cout << "Stack is empty!";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}

bool stack:: isEmpty(){
    if(top < 0)
        return true;
    else
        return false;
}

int stack:: peek(){
    return a[top];
}

int main()
{
    stack s;          // Object of class stack 
  
    /*                // You can also insert each element like this 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);*/
    
    cout << "Visit: https://github.com/Bhavya1130";
    int m;
    cout << "\nEnter number of elements in stack: ";
    cin >> m;
  
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        s.push(x);
    }
    
    cout <<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        cout << s.peek() <<" ";
        
        s.pop();
    }
    
    return 0;
}
