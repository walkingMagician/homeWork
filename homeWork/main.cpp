#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5

void main() 
{
	setlocale(LC_ALL, "");

#ifdef TASK_1;	
	int i = 3;
	i = ++i + ++i;
	cout << i << endl; // 10
#endif

#ifdef TASK_2;	
	int i = 3;
	i = i++ + ++i;
	cout << i << endl; // 9
#endif

#ifdef TASK_3;	
	int i = 3;
	i = i++ + 1 + ++i * 2;
	cout << i << endl; // 14
#endif

#ifdef TASK_4;	
	int i = 3;
	i = i++ + 1 + (++i *= 2);
	cout << i << endl; // 18
#endif

#ifdef TASK_5;	
	int i = 3;
	i += i++ + 1 + (++i *= 2);
	cout << i << endl; // 26
#endif



}