// Code to directly insert the values from input to Doubly Linked list.
// C++

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
    struct node* prev;

};

struct node* head = NULL;
struct node* last = NULL;

void insertfirst(int key)
{
    struct node* link = (struct node*)malloc(sizeof(struct node));
    link->data= key;
    
    if(last == NULL)
    {
        last = link;
    }
    else
    {
        link ->next = head;
        link = head;
    }
        
}

void deletefirst()
{
    if(head->next != NULL;)
    {
        head = head-> next;
    }
    else
    {
        head = NULL;
        last = NULL;
    }
}

void insertlast(int key)
{
    struct node *link = (struct node)*malloc(sizeof(struct node));
    link -> data= key;
    link -> prev = last;
    last = link;
}

void deletelast()
{
    last = last -> prev;
}


void print()
{
    struct node * ats = head;
    while(ats!=last)
    {
        cout << ats->data << endl;
        ats = ats->next;

    }

}

int main()
{
    int n;
    cout << "Input the number of values:" << endl;
    cin >> n;
    cout << "Input the values to be added to linked list :"<< endl;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    // Add insertfirst() or deletefirst() or insertlast() or deletelast
    
    return 0;
}
