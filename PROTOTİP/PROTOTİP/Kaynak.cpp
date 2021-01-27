#include <stdio.h>
#include <stdlib.h>
int fak(int);
int main()
{
	printf("%d \n", fak(4));
	system("pause");
	return 0;
}
int fak(int sayi)
{
	int sonuc = 1;
	for (int i = sayi; i >=1 ; i--)
	{
		sonuc = sonuc * i;
	}
	return sonuc;
}