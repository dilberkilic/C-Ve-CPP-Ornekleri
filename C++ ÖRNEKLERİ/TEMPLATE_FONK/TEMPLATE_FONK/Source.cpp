#include <iostream>
#include <stdlib.h>
using namespace std;
//int kareal(int a)
//{
//	return a * a;
//}
//
//double kareal(double a)
//{
//	return a * a;
//}

template <class A>
A kareal (A a)
{
	return a * a;
}

int main()
{
	cout << kareal(5.5) << endl;
	system("pause");
	return 0;
}