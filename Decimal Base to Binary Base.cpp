//Convert a number of Decimal base to Binary base 
//C++

#include<bits/stdc++.h>
using namespace std;

int binary (int n)
{
    int a=0;
    int p=1;
    while(n!=1)
    {
        a+=p*(n%2);
        n=n/2;
        p=p*10;
    }
    if(n!=0)
    a+=p;
    return a;
}
int main()
{
    int n;
    cin >> n;
  cout << binary(n) ;
}
