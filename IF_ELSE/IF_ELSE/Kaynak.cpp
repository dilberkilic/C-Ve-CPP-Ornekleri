#include <stdio.h>
#include <stdlib.h>
int main()
{
	int yas;
	printf("yasinizi giriniz:");
	scanf_s("%d", &yas);
	if (yas < 18)
	{
		printf("yasiniz sisteme girmek icin kucuk...\n");
	}
	else if (yas = 18)
	{
		printf("sisteme basarili bir sekilde giris yapilmistir..\n ");
	}
	else
	{
		printf("sisteme basarili bir sekilde giris yapilmistir..\n ");
	}
	system("pause");
	return 0;
}