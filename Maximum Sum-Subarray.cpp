//Maximum Sum of a Subarray
//C++

#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i<b ;i++)

int main()
{
    int a,sum=0;
    cout <<"Input the number of value:";
    cin >> a;
    int b[a];
    cout<<"Now input the numbers:";
    rep(i,0,a)
    {
        cin >> b[i];
    }

    int best =0;

    rep(i,0,a)
    {
        sum = max(b[i],sum+b[i]);
        best = max(best,sum);
    }

    cout << best << endl;

}
