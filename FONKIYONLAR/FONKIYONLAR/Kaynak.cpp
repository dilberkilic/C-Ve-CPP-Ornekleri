#include <stdio.h>
#include <stdlib.h>

int kareal(int sayi)
{
	return sayi * sayi;
}
float ort(int sayi1, int sayi2, int sayi3)
{
	float toplam;
	toplam = sayi1 + sayi2 + sayi3;
	return  toplam / 3;
}
void isim(char a, char b, char c)
{
	printf("%c%c%c \n", a, b, c);
}
void mesaj()
{
	printf("hello MY darling ");
	isim('C', 'A', 'N');
	return;
}

int main()
{
	int kare;
	kare = kareal(9);
	printf("%d\n", kare);

	float sonuc;
	sonuc = ort(41, 28, 65);
	printf("%.1f\n", sonuc);

	mesaj();

	isim('C', 'E', 'M');

	system("pause");
	return 0;
}

