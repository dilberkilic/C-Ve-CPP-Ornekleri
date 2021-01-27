#include <iostream>
#include <stdlib.h>
using namespace std;
class Sifirabolmehatasi
{
public:
	char*hata=(char*)"sifira bolme hatasi";
};
int bolme(int pay, int payda)
{
	if (payda == NULL)
		throw Sifirabolmehatasi();
	else
		return pay / payda;
}
int main()
{
	try
	{
		bolme(5, 0);
	}
	catch (Sifirabolmehatasi nesne)
	{
		cout << nesne.hata << endl;
	}

	system("pause");
	return 0;
}