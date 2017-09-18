//Binary Search Algorithm
//C++

#include <bits/stdc++.h>
using namespace std;

void BinarySearch(int a[],int x,int i,int n)
{
    int lb=i;
    int ub=n;
    int m = ((ub-lb)/2) + lb;
    if(a[m]==x)
    {
        cout << "The index is:" << m+1 << endl;
        return;
    }

    if(a[lb]==x)
    {
        cout << "The index is:" << lb+1 <<endl;
        return;
    }
    if(a[ub]==x)
    {
        cout << "The index is:" << ub+1 << endl;
        return;
    }
    if(a[m]>x)
    {
        ub=(n/2)+1;
        BinarySearch(a,x,lb,ub);
    }
    if(a[m]<x)
    {
        lb=m+1;
        BinarySearch(a,x,lb,ub);
    }
}

int main()
{
 int n =0;
 int x =0;
  cout << "Input the total no. of values:" << endl;
  cin >> n ;
 int a[n];
  cout << "Now enter the numbers :" << endl;
  for(int i = 0;i<n; i++)
  {
      cin >> a[i];
  }
  cout << "Now input the value to be found :" << endl;
  cin >> x;
  BinarySearch(a,x,0,n-1);
  return 0;
}
