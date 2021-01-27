#include <stdio.h>
#include <stdlib.h>
int main() 
{

	int sayi1, sayi2;
	char secenek;
	printf("lutfen iki sayi giriniz:");
	scanf_s("%d %d", &sayi1, &sayi2);
	printf("A-Toplama\n");
	printf("B-Cikarma\n");
	printf("C-Carpma\n");
	printf("D-Bolme\n");
	printf("lutfen istediginiz islemin harfini giriniz:");
	scanf_s(" %c", &secenek);
	switch (secenek)
	{
	case 'A': {printf("toplam:%d\n", sayi1 + sayi2); }
			 break;
	case 'B': {printf("cikarma:%d\n", sayi1 - sayi2); }
			 break;
	case 'C': {printf("carpma:%d\n", sayi1*sayi2); }
			 break;
	case 'D': 
	{
		printf("bolme:%f\n", ((float)sayi1 / sayi2));
		printf("bolmeden kalani gormek istiyorsan 1 e bas..\n");
		int kalan;
		scanf_s("%d", &kalan);
		if (kalan==1)
		{
			printf("kalan:%d\n", sayi1%sayi2);
		}
	}
			 break;
	default: {printf("yanlis bir harfe tusladiniz :("); }
		break;
	}
	system("pause");
	return 0;
}