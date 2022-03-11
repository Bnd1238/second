#include "kalc.h"

/*
int mnus(int a, int b)
{
	return a - b;
}
int mult(int a, int b)
{
	return a * b;
}
int d(int a, int b)
{
	return a / b;
}
int m(int a, int b)
{
	return a % b;
}

int pls(int a, int b)
{
	return a+b;
}


	int calc(int(*func)(int, int), int a, int b)
	{
		return func(a,b);
	}
	*/

void odin(vector<int>& vec)
{
	reverse(vec.begin(), vec.end());
	
}
void  dva(vector<int>& vec)
{
	sort(vec.begin(), vec.end());
	return;
}
void tri(vector<int>& vec)
{
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	return ;
}

void (*check(vector<int> &vec))(vector<int> &vec)
{
	int a=0;
	for (int i = 1; i < vec.size(); ++i)
	{
		a += vec[i];
	}
	return &tri;
	if (a == vec[0])
		return &odin;
	if (a > vec[0])
		return &dva;
	if (a < vec[0])
		return &tri;
}
void print(void(*func)(vector<int>&vec),vector<int>&vec)
{
	 func(vec);
	for (int i=0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
}
