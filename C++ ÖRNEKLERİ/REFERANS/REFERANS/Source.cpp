#include <iostream>
#include <stdlib.h>
using namespace std;
int funcCbyVal(int x) // FONKS�YONU REFERANS �LE �A�IRMA.
{
	x += 10;
	return x;
}
void funcCbyPtr(int*x)
{
	*x += 10;
}
void funcCbyRef(int &x) // & bu kullan�m cpp ile gelen bir �zelliktir.
{
	x += 10;
	x++;
	return;
}

int main()
{
	int b = 50,c;
	c = funcCbyVal(b); //  b de�i�kenini funcCbyVal fonksiyonumuza atad�k ordaki de�eri ise c ye atad�k . burda 50 olan de�er 10 artt�r�ld� ve c ye 60 olarak atand�.
	funcCbyPtr(&c); // c de�erini ptr fonksiyonumuza atad�k. 60 olan c de�eri ptr fonksiyonuyla 10 artt�r�ld� ve 70  oldu .
	funcCbyPtr(&b); // b de�erini atad�k bu seferde. 50 olan b de�eri 10 artt�rd� ve 60 yapt�. 
	funcCbyRef(c); // refede c yi atad�k . 70  olan c de�i�kenimiz ref fonksiyonuyla 10 artt�r�p 1 eklendi ve 81 oldu.
	cout << b << " " << c << std::endl; // ��kt�m�zda 60 81 olarak ��k�cak .


	system("pause");
	return 0;
}