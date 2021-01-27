#include <iostream>
#include <stdlib.h>
using namespace std;
int funcCbyVal(int x) // FONKSÝYONU REFERANS ÝLE ÇAÐIRMA.
{
	x += 10;
	return x;
}
void funcCbyPtr(int*x)
{
	*x += 10;
}
void funcCbyRef(int &x) // & bu kullaným cpp ile gelen bir özelliktir.
{
	x += 10;
	x++;
	return;
}

int main()
{
	int b = 50,c;
	c = funcCbyVal(b); //  b deðiþkenini funcCbyVal fonksiyonumuza atadýk ordaki deðeri ise c ye atadýk . burda 50 olan deðer 10 arttýrýldý ve c ye 60 olarak atandý.
	funcCbyPtr(&c); // c deðerini ptr fonksiyonumuza atadýk. 60 olan c deðeri ptr fonksiyonuyla 10 arttýrýldý ve 70  oldu .
	funcCbyPtr(&b); // b deðerini atadýk bu seferde. 50 olan b deðeri 10 arttýrdý ve 60 yaptý. 
	funcCbyRef(c); // refede c yi atadýk . 70  olan c deðiþkenimiz ref fonksiyonuyla 10 arttýrýp 1 eklendi ve 81 oldu.
	cout << b << " " << c << std::endl; // çýktýmýzda 60 81 olarak çýkýcak .


	system("pause");
	return 0;
}