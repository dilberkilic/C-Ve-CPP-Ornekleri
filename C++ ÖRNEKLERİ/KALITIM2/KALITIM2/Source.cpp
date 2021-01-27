#include <iostream>
#include <stdlib.h>
using namespace std;
class A
{
private:
	int priA;
protected:
	int proA;
public:
	int pubA;
};
class B :public A 
{
public:
	void func()
	{
		int a;
		a = pubA;
		a = proA;

	}
};
class C :private A
{ 
public:
	void func()
	{
		
		int a;
		a = proA;
		a = pubA;

	}
};
class D :protected A
{
public:
	void func()
	{

		int a;
		a = proA;
		a = pubA;

	}
};
int main()
{
	B nesneB;
	nesneB.func();
	nesneB.pubA = 5;
	C nesneC;
	nesneC.func();
	D nesneD;
	nesneD.func();
	system("pause");
	return 0;
}