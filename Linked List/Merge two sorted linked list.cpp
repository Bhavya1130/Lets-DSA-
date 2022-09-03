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

void diaplay(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

void sortt(Node* a, Node* b){
    Node* temp1 = new Node();
    temp1 = a;
    Node* temp2 = new Node();
    temp2 = b;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
        cout << temp1->data << " ";
        temp1 = temp1->next;
        }
        else if(temp2->data < temp1->data){
        cout << temp2->data << " ";
        temp2 = temp2->next;
        }
        else{
        cout << temp1->data << " ";
        temp1 = temp1->next;
        cout << temp2->data << " ";
        temp2 = temp2->next;
        }
    }
}
int main()
{
    int n;
    cout << "*****Please enter sorted Linked List*****";
    cout<<"\nEnter number of elements in 1st list: ";
    cin >> n;
    int a[n];
    Node* head1 = NULL;
    for(int i=0; i<n; i++){
        cin >> a[i];
        insertAtEnd(&head1, a[i]);
    }
    
    int m;
    cout<<"\nEnter number of elements in 2nd list: ";
    cin >> m;
    int b[m];
    Node* head2 = NULL;
    for(int i=0; i<m; i++){
        cin >> b[i];
        insertAtEnd(&head2, b[i]);
    }
    
    cout << "\nLinked list 1: ";
    diaplay(head1);
    cout << "\nLinked list 2: ";
    diaplay(head2);
    
    cout << "\n\nThe merged sorted array is: ";
    sortt(head1, head2);
    return 0;
}

