#include <iostream>
using namespace std;

class stackNode{
    public:
    int data;
    stackNode* next;
    stackNode(){
        next = NULL;
    }
};

stackNode* newNode(int data)
{
    stackNode* stack = new stackNode();
    stack->data = data;
    stack->next = NULL;
    return stack;
}

void push(stackNode** head, int num){
    stackNode* newSNode = newNode(num);
    newSNode->next = *head;
    *head = newSNode;
}

// Function to check stack is empty or not 
bool isEmpty(stackNode* head){
    if(head==NULL)
        return true;
    else
        return false;
}

// Function to get the top element of the stack
int peek(stackNode* head){
    if(isEmpty(head)==true)
        return -1;
    else{
        int temp;
        temp = head->data;
        return temp;
    }
}

// Function to delete the top node
void pop(stackNode** head){
    if(head == NULL)
        cout << "Already empty stack!";
    stackNode* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to display the stack
void display(stackNode* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

// Function to get the number of element in the stack
int size(stackNode* head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    stackNode* s = NULL;
    int a;
    cout << "Enter number of elements in stack: ";
    cin >> a;
    
    int x;
    for(int i =0; i<a; i++){
        cin >> x;
        push(&s, x);
    }
    
    cout << "Original stack: ";
    display(s);
    cout << endl;
    cout << "peek() called to show 1st element of stack\n"
    if(peek(s)==-1)
        cout << "Empty List!";
    else
        cout << peek(s);
    cout << "\n ";
    if(isEmpty(s)==true)
        cout << "Empty stack!";
    else
        cout << "Not Empty!";
    cout << endl;
    pop(&s);
    display(s);
    
    cout << endl;
    cout << size(s);
    return 0;
}
