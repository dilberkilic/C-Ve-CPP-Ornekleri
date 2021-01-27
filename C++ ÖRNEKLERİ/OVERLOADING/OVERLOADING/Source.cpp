#include <iostream>
#include <stdlib.h>
using namespace std;
class Operatorler
{
private:
	int sayi;
public:
	void setsayi(int a) { sayi = a; }
	int getsayi() { return sayi; }


	void operator +(Operatorler a)
	{
		sayi = sayi + a.getsayi();
	}
};

int main()
{
	Operatorler o,o2;
	o.setsayi(9);
	o2.setsayi(20);

	o+o2;

	cout << o.getsayi() << endl;
	system("pause");
	return 0;
}