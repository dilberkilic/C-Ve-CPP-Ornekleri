#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
	const int BOYUT = 10;
	char dizi1[BOYUT][SIZE];
	printf("adinizi VE soyadinizi giriniz:");
	scanf("%s", &dizi1);
	//gets_s(dizi1, BOYUT);
	printf("merhaba=%s,Sitemize hosgeldiniz..\n", dizi1);
	system("pause");
	return 0;
}