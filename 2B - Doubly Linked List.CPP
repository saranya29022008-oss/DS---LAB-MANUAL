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
        newNode->prev = NULL;
        newNode->next = NULL;
        if(head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    cout << "Doubly Linked List: ";
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
