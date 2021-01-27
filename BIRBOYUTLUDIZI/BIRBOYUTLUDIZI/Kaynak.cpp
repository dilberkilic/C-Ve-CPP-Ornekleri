#include <stdio.h>
#include <stdlib.h>
int main()
{
	int dizi[3];
	dizi[0] = 8;
	dizi[1] = 40;
	dizi[2] = 0;

	printf("%d\n",dizi[2]);
	printf("%d\n", dizi[1]);
	printf("%d\n", dizi[0]);

	float dizi2[] = { 2.40f,3.45f,7.00f };
	printf("%.2f\n", dizi2[0]);

	int a = dizi[2];
	printf("%d\n", a);

	char mesaj[5];
	printf("5 karekterli mesaj giriniz:");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%c", &mesaj[i]);
	
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%c", mesaj[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}