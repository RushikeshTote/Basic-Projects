#include <bits/stdc++.h>
using namespace std;
int ctr=1234567;

void thr(int c,int con);
void fou(int c,int con);
void one(int c,int con);

void thr(int c,int con)
{
	int b = c-3;
	int fun =con;
	fun++;
	if(b>=4)
	{
		fou(b,fun);
		thr(b,fun);
		one(b,fun);
	}
	else if(b>=3)
	{
		thr(b,fun);
	    one(b,fun);
	}
	else if(b<3&&b>0)
	{
		one(b,fun);
	}
	else if(b==0)
	{
		ctr = min(ctr,fun);
	}

}
void fou(int c,int con)
{
	int b = c-4;
	int fun =con;
	fun++;
	if(b>=4)
	{
		fou(b,fun);
		thr(b,fun);
		one(b,fun);
	}
	else if(b>=3)
	{
		thr(b,fun);
	    one(b,fun);
	}
	else if(b<3&&b>0)
	{
		one(b,fun);
	}
	else if(b==0)
	{
		ctr = min(ctr,fun);
	}

}
void one(int c,int con)
{
	int b = c-1;
	int fun =con;
	fun++;
	if(b>=4)
	{
		fou(b,fun);
		thr(b,fun);
		one(b,fun);
	}
	else if(b>=3)
	{
		thr(b,fun);
	    one(b,fun);
	}
	else if(b<3&&b>0)
	{
		one(b,fun);
	}
	else if(b==0)
	{
		ctr = min(ctr,fun);
	}

}

int main()
{
int c;
cin >> c;
fou(c,0);
thr(c,0);
one(c,0);

cout << ctr;
}
