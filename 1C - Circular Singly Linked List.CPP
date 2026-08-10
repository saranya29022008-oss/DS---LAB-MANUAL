#include <iostream>
using namespace std;
struct Node
{
    int data;
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
        newNode->next = NULL;
        if(head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    // Make the list circular
    temp->next = head;
    cout << "Circular Linked List: ";
    temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);
    return 0;
}
