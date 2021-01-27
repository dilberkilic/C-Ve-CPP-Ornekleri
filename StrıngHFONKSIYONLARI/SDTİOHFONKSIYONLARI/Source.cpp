#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char dizi1[30] = {"hello world"};
	char dizi2[20] = {"c programlama"};
	printf("dizi1=%d\ndizi2=%d\n", strlen(dizi1), strlen(dizi2));
	//strcpy(dizi1, dizi2);
	//strncpy(dizi1, dizi2, 10);
	//strcat(dizi1, dizi2);
	//int deger =strcmp(dizi1, dizi2);
	//printf("%s\n%d", dizi1,deger);
	system("pause");
	return 0;
}