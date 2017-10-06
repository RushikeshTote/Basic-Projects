//C++
//DFS

#include <bits/stdc++.h>
using namespace std;
vector <int> a[10];
bool visit[10];

void initialize() {
    for(int i = 0;i < 10;++i)
     visit[i] = false;
}

void DFS(int s)
{
	visit[s] = true;
	for(int i=0;i<a[s].size();i++)
	{
		if(visit[a[s][i]]==false)
		{
			DFS(a[s][i]);
		}
	}
}



int main()
{
   int nodes, edges, c, b,d;  //d is components connected.
   initialize();
   cin >> nodes;
   cin >> edges;
   for(int i=0;i<edges;i++)
   {
	   cin>>a>>b;
	   a[c].push_back(b);
	   a[b].push_back(c);
   }
   for(int i = 1;i <= nodes;++i) {
        if(visit[i] == false)     {
            DFS(i);
            d++;
        }
       }
}
