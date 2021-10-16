#include <iostream>

using namespace std;


struct Node{

        int data;
        Node* next;
};
// creating a pointer (Global Variable)
Node* head = NULL;

void Insert(int x)
{
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
    }

void Print(int x)
{
    Node* temp = head;
    while (temp != NULL)
    {
        auto value = temp->data;
        cout<<value;
        temp->next = temp;
    }
}


int main()
{
    
    int n, x, i;

    cout<<"How many numbers do you want? ";
    cin>>n;
    cout<<endl;

    for (i=0; i<n; i++)
    {
        cout<<"Enter a number: ";
        cin>>x;
        Insert(x);
        Print(x);
    }

    return 0;
}