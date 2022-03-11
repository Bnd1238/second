#ifndef CV
#define CV

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*
int pls(int a, int b);
int mnus(int a, int b);
int mult(int a, int b);
int d(int a, int b);
int m(int a, int b);
int calc(int(*func)(int , int ),int a, int b);*/


void odin(vector<int>& vec);
void dva(vector<int>& vec);
void tri(vector<int>& vec);

void (*check(vector<int>& vec))(vector<int>& vec);
void print(void(*func)(vector<int>&vec), vector<int>& vec);
#endif

