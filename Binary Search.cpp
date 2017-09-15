//Binary Search Algorithm
//C++
#include <bits/stdc++.h>
using namespace std;

void BinarySearch(int a[], int n, int x)
{
    cout << "Here are the indexes:" << endl;
    for(int i=0; i<n ; i++)
    {
        if(a[i]=x)
        {
            cout << i << endl;
        }
    }

}


int main()
{
    int n, x;
    cout << "Input number of integers in the array:" <<endl;
    cin >> n ;
    cout << "Input the number to find :" <<endl ;
    cin >> x;
    int a[n];
    for(int i=0; i<n; i++ )
    {
        cin >> a[i];
    }
    BinarySearch(a[],n,x);
    return 0;
}
