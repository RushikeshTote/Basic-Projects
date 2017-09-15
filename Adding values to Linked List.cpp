// Code to directly insert the values from input to the Linked list.
// C++

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;

};

struct node* head = NULL;

void insertfirst(int key)
{
    struct node* link = (struct node*)malloc(sizeof(struct node));
    link->data= key;
    link->next=head;
    head = link;
}

void deletefirst()
{
    head = head-> next;
}

void print()
{
    struct node * ats = head;
    while(ats!=NULL)
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

    for(int i=0; i<n; i++)
    {
        insertfirst(a[i]);
    }

    print();

    return 0;
}
