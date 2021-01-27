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
	virtual void func() { cout << "A sinifi \n"; }
};
class B :protected A
{
public:
	void func()
	{
		int a;
		a = pubA;
		a = proA;
		cout << "B sinifi \n";
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
		cout << "C sinifi \n";
	}
};

int main()
{
	A nesneA;
	nesneA.func();
	B nesneB;
	nesneB.func();
	C nesneC;
	nesneC.func();
	system("pause");
	return 0;
}