//C++

#include<bits/stdc++.h>
using namespace std;

int check(int i,int n)
{
    if(n%i==0)
    {

        return 0;
    }
    else
        return 1;
}

int main()
{
    int n = 0;
    int i = 2;
    int a =0;
    cin >> n;
    while(i!=n)
    {
      if(check(i,n)==0)
      {
          a++;
          break;
      }


    }

    if(a!=0)
    {
     cout <<"composite";
    }
    else
    {
     cout << "prime" ;
     }
}
