#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//typedef ifadesini kullanarak C dilindeki veri t�rlerini temsil eden kelimeleri (int, char, float, vs.) farkl� �ekilde tan�mlayabilirsiniz. Bu �ekilde mevcut bir veri t�r� i�in yeni bir isim veya yeni bir veri t�r� olu�turabilirsiniz

typedef struct ogrenci
{
	int id;
	char *isim;
}OGR;
int main()
{
	struct ogrenci ogr1;
	OGR ogr2;

	ogr2.id = 10;
	ogr2.isim =(char*) "ahmet";

	int a;
	typedef int tamsayi; // int veri t�r� art�k tamsayi ismiyle tutulmaya baslandi.
	tamsayi sayi1 = 45;


	typedef char karakter;
	karakter isim[] = "ahmet";

	printf("ogrenci bilgileri\nid:%d\nadi:%s\n", ogr2.id, ogr2.isim);


	system("pause");
	return 0;
}