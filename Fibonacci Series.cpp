//C++

#include <iostream>
using namespace std;
int fib(int n);

int main()
{
    int n;
    cout<< "FIBONACCI SERIES" <<endl;
    cin >> n;
    cout << fib(n)<<endl;

}
int fib(int n)
{
    if(n<3)
    {
        return (1);
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}
