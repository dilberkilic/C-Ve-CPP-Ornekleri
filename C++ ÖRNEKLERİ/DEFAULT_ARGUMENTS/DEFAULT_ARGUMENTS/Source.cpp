#include <iostream>
#include <stdlib.h>
using namespace std;
int hacim1(int a=1, int b=1, int c=1)
{
	return a * b*c;
}
int main()
{
	int h;
	h=hacim1(10);
	hacim1();//h=1
	hacim1(10, 20);//h=200
    hacim1(10, 20, 30);//h=6000


	cout << h << endl;

	system("pause");
	return 0;
}