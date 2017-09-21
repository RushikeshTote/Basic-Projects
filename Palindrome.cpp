//Check if any number or a string is a palindrome
//C++

#include<bits/stdc++.h>
using namespace std;

int main()
{
string a;
cin >> a;
int b = a.length()-1;
int n =0;
while(n!=b&&n!=(b-1))
{
    if(a[n]==a[b])
    {
        n++;
        b--;
    }
    else
    {
        cout<<"Given string/number is not a palindrome.";
        return 0;
    }
}
cout<<"Given number is a palindrome";
}
