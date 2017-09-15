// Code to directly insert the values from input to Circular Linked list.
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

    if(head == NULL)
        {
            head =  link;
            last = link;
        }
    else
        {
            link -> next = head;
            head = link ;
            link -> prev = last;
        }
}

void deletefirst()
{
    if(head->next != NULL)
    {
        head = head-> next;
        head-> prev = last;
    }
    else
    {
        head = NULL;
    }
}

void insertlast(int key)
{
    struct node *link = (struct node)*malloc(sizeof(struct node));
    link -> data= key;
    if(last == NULL)
    {

        last = link;
    }
    else
    {
        link -> prev = last;
        last = link;
        link -> next = head;
    }

}

void deletelast()
{
    last = last -> prev;
    head -> prev = last;
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
