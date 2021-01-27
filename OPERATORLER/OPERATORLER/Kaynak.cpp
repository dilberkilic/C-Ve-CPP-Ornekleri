#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	a = 5;
	int b = 9;
	a = b;
	printf("%d-%d\n", a, b);
	int x = 7, y = 6, z = 3, sayi1 = 8, sayi2 = 3;
	x = y = z;
	printf("%d-%d\n", x, y);
	printf("sayi1 in sayi2 ye modu:%d\n", sayi1%sayi2);
	int deger = 4;
	deger *= 3;
	//deger=deger*3; bu uzun yolu.
	printf("degerimiz:%d\n", deger);
	int q = 6, w = 3, e;
	e = q++;
	printf("\n\n e:%d q:%d \n\n", e, q);
	int say1 = 11, say2 = 60;
	printf("karsilastirma:%d\n", say1 <= say2);
	printf("karsilastirma:%d\n", say1 == say2);
	printf("karsilastirma:%d\n", say1 != say2);
	printf("mantiksal:%d\n", say1 != say2 || say1 < say2);
	printf("mantiksal:%d\n", say1 == say2 && say1 < say2);
	system("pause");
	return 0;			
}