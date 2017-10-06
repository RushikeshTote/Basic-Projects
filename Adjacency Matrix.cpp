//C++
//Adjacency Matrix

#include <bits/stdc++.h>
using namespace std;

bool a[10][10];

void initialize(bool a[])
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			a[i][j]=false;
		}
	}
}
int main()
{
	initialize(a);
 auto n, t, c, b;
 cin >> n >> t;
 for(int i=0;i<t;i++)
 {
	 cin >> c >> b;
	 a[c][b]=true;
 }
 return 0;
}
