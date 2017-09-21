//Calculating factorial for any number
//C++

#include<bits/stdc++.h>
using namespace std;

int main()
{
int a;
int b =1;
cout << "Input the number for factorial to be calulated:";
cin >> a;
while(a!=1)
{
    b = a*b;
    a--;
}
cout <<"The factorial is: " << b << endl;
}
