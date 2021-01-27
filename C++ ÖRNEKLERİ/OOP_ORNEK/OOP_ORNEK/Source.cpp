#include <iostream>
#include <stdlib.h>
using namespace std;
class Insan
{
	public:
	char ad[50];
	char *soyad;
	int yas;
	double boy;

	void kos();
	void dur()
	{
		cout << "durdum" << endl;
	}
};
void Insan::kos()
{
	cout << "kosuyorum" << endl;
}
int main()
{
	Insan a;
	strcpy_s(a.ad, "dilber");
	a.soyad = (char*)"kilic";
	a.yas = 18;
	a.boy = 1.56;

	cout << a.ad << " kos" << endl;
	a.kos();

	cout << a.ad << " dur" << endl;
	a.dur();

	system("pause");
	return 0;
}