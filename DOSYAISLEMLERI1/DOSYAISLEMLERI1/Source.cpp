#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct ogrenci
{
	int numara;
	char ad[50], soyad[50];
}OGR;
int main()
{
	const int OGRSAY=3;
	OGR ogrenciler[OGRSAY]; 

	int i = 0;
	while (i<OGRSAY)
	{
		printf("%d.ogrencinin numarasini adini ve soyadini sirayla giriniz:\n",i+1);
		scanf("%d %s %s", &(ogrenciler[i].numara), ogrenciler[i].ad, ogrenciler[i].soyad);
		i++;
	}

	FILE*dosya = fopen("ogrenciler.txt", "a"); // dosya olusturmak icin kullanýrýz sonda ki a modunu belirtir.
	if (!dosya)
	{
		printf("dosya acilamadi!\n");
		exit(1);
	}

	i = 0;

	while (i<OGRSAY)
	{
		fprintf(dosya, "\n%d %s %s", ogrenciler[i].numara, ogrenciler[i].ad, ogrenciler[i].soyad);
		i++;
	}
	
	printf("verilerimiz ogrenciler.txt ye basarili bir sekilde kaydedilmistir.\n"); // FPRÝNTF dosya formatlý veri yazar.

	if (dosya)
		fclose(dosya); // dosayyý kapatýr.

	dosya = fopen("ogrenciler.txt","r"); // burdaki r modu okuma yapar .
	if (!dosya)
	{
		printf("dosya acilamadi!\n");
		exit(1);
	}

	printf("tum kayitlar\nNumaralar\tadi\tsoyadi\t");

		OGR *o = (OGR*)malloc(sizeof(OGR) * 3);
	i = 0;
	while (!feof(dosya))
	{
		fscanf(dosya, "%d %s %s",&(o[i].numara), o[i].ad, o[i].soyad);
		printf( "%d\t%s\t%s\n", o[i].numara, o[i].ad, o[i].soyad);
		i++;

		if (i % 3 == 0)
		
			o=(OGR*)realloc(o, sizeof(OGR)*(i + 3));
		
	}

	if (dosya)
		fclose(dosya);

	system("pause");
	return 0;
}