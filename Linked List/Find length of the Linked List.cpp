#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void insertAtEnd(Node** head_ref, int new_data){
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data; 
    new_node->next = NULL; 
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
    while (last->next != NULL)
    {
        last = last->next; 
    }
    last->next = new_node; 
    return; 
    
}

void displayList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

void lengthOfList(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    cout << "\nLinked List has " << len << " elements";
}

int main()
{
    cout << "Visit: https://github.com/Bhavya1130";
    int n, ele;
    cout<<"\nEnter number of elements in the list: ";
    cin >> n;
    Node* head1 = NULL;
    for(int i=0; i<n; i++){
        cin >> ele;
        insertAtEnd(&head1, ele);
    }
    
    displayList(head1);
    
    // Call the lengthOfList function
    lengthOfList(head1);
    
    return 0;
}
