#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
};
int main()
{
    Node *head = NULL, *temp = NULL, *newNode;
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        newNode = new Node;
        cout << "Enter data: ";
        cin >> newNode->data;
        if(head == NULL)
        {
            head = newNode;
            head->next = head;
            head->prev = head;
            temp = head;
        }
        else
        {
            newNode->prev = temp;
            newNode->next = head;
            temp->next = newNode;
            head->prev = newNode;
            temp = newNode;
        }
    }
    cout << "Doubly Circular Linked List: ";
    temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);
    return 0;
}
