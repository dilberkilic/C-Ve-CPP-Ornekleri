#include <iostream>
#include <stdlib.h>
using namespace std;
class Zaman
{
public:
	Zaman();//constructor
	void zamanayarla(int, int, int);
	void zamanYazdir();
private:
	int sa, dk, sn;
};

void Zaman::zamanayarla(int h, int m, int s)
{
	sa = ((h >= 0 && h < 24) ? h : 0); 
	dk = ((m >= 0 && m < 60) ? m : 0);	
	sn = ((s >= 0 && s < 60) ? s : 0);
}
Zaman::Zaman()
{
	sa = 0;
	dk = 0;
	sn = 0;
}
void Zaman::zamanYazdir()
{
	cout << ((sa == 0 || sa ==12 ) ? 12 : sa % 12)<<":"
        <<(dk<10 ? "0":"")<<dk<<":"
		<<(sn<10 ? "0":"")<<sn<<":"
		<< (sa < 12 ? "AM":"PM")
		<< endl;
}
int main()
{
	Zaman z;
	z.zamanayarla(15, 6, 3);
	z.zamanYazdir();
	system("pause");
	return 0;
}