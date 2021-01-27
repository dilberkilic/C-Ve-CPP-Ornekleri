#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char dizi[])
{
	int indis = 0;
	while (dizi[indis]!='\0')
	{
		indis++; 
	}
	return indis;
}

int strlenptr(char *dizi)
{
	char *p = dizi;
	while (*p!=NULL)
	{
		p++;
	}
	return p-dizi;
}

int main()
{
	 //strlen fonksiyonu
	char dizi[] = "hello world";
	
	printf("%d\n", strlen(dizi));

	printf("%d\n", mystrlen(dizi));

	printf("%d\n", strlenptr(dizi));

	printf("%d\n",dizi);

	printf("%d\n", dizi+6);

	printf("%d\n", *(dizi+6));

	system("pause");
	return 0;
}