//C++
//Longest Common Subsequence
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin >>a>>b;
	int n=b.length();
	int m=a.length();
	int l[m+1][n+1];

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			{
				if(i==0||j==0)
				{
					l[i][j]=0;
				}

				else if(a[i-1]==b[j-1])
				{
					l[i][j]=1+l[i-1][j-1];
				}

				else
				{
					l[i][j]=max(l[i-1][j],l[i][j-1]);
				}
			}
	}
	cout << l[m-1][n-1];



	return 0;
}
