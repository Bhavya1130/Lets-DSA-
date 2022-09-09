// Menu driven program for basic functions of linked list
// 1. Insertion
// 2. Deletion
// 3. Searching
// 4. Display

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* n){
    while(n!=NULL){
        cout << n->data << " ";
        n = n->next;
    }
}

void insertAtBig(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void append(Node** head_ref, int new_data) 
{ 
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

void insertInBtw(Node* pev_node, int new_data){
    if(pev_node == NULL){
        cout << "The given node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = pev_node->next;
    pev_node->next = new_node;
}

bool searchEle(Node* head, int k){
    Node* current = head;
    while(current != NULL){
        if(current->data==k)
            return true;
        current = current->next;
    }
    return false;
}

void deleteNode(Node** head, int key){
    Node* current = *head;
    Node* prev = NULL;
    if(current!=NULL && current->data == key){
        *head = current->next;
        delete current;
        return;
    }
    else{
        while(current!=NULL && current->data != key){
            prev = current;
            current = current->next;
        }
    }
    if(current==NULL){
        cout << "Element not found!\n";
        return;
    }
    prev->next = current->next;
    delete current;
}

int main()
{
    cout << "Visit: https://github.com/Bhavya1130";
    int n;
    cout<<"\nEnter number of elements in the Linked list: ";
    cin >> n;
    Node* head = NULL;
    int el;
    cout << "Enter elements in linked list: ";
    for(int i=0; i<n; i++){
        cin >> el;
        append(&head, el);
    }
    
    cout << "\nOriginal Linked List: ";
    printList(head);
    cout << "\n\n";
    
    int x;
    cout << "1) Insert a new element \n2) Delete an existing element \n3) Search an element \n4) Display all the elements\n";
    cout << "\nEnter a number from the above menu: \n";
    cin >> x;
    
    switch (x) {
        case 1: {
            char y;
            cout << "Select where you want to insert the element \na) At begining\nb) At end \nc) In between two elements";
            cout << "\nEnter a character: ";
            cin >> y;
            switch (y){
                case 'a': {
                    int numB;
                    cout << "\nEnter element to be added at beginning: ";
                    cin >> numB;
                    insertAtBig(&head, numB);
                    cout << "New Linked List: ";
                    printList(head);
                    break;
                }
                case 'b': {
                    int numE;
                    cout << "\nEnter element to be added at end: ";
                    cin >> numE;
                    append(&head, numE);
                    cout << "New Linked List: ";
                    printList(head);
                    break;
                }
                case 'c': {
                    int numBt;
                    cout << "\nEnter element to be added in between: ";
                    cin >> numBt;
                    insertInBtw(head->next->next->next, numBt);
                    cout << "New Linked List: ";
                    printList(head);
                    break;
                }
                default: cout << "Enter any valid character";
            }
            break;
        }
        case 2: {
             int del;
             cout << "Enter a number to delete: ";
             cin >> del;
             deleteNode(&head, del);
             cout << "New Linked List: ";
             printList(head);
             break;
        }
        case 3: {
            int k;
            cout << "Enter element to Search: ";
            cin >> k;
            if(searchEle(head, k)==true){
                cout << "Element found";
            }
            else 
                cout << "Element not found";
            break;
        }
        case 4: {
            cout << "This is the linked list: ";
            printList(head);
            break;
        }
        default: 
            cout << "Enter a valid number";
    }
    return 0;
}
