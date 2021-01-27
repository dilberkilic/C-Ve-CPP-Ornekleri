#include <stdio.h>
#include <stdlib.h>
int main()
{
	int yas,salonno;
	printf("yasinizi giriniz:");
	scanf_s("%d", &yas);
	if (yas < 18)
	{
		printf("yasiniz sisteme girmek icin kucuk...\n");
	}
	else
	{
		printf("sisteme basarili bir sekilde giris yapilmistir..\n ");
		printf("lutfen girmek istediginiz salon numarasini giriniz(1,2,3);");
		scanf_s("%d", &salonno);
		switch (salonno)
		{
		case 1: {printf("%d numarali salona giris yaptiniz.\n", salonno); }
			   break;
		case 2: {printf("%d numarali salona giris yaptiniz.\n", salonno); }
			   break;
		case 3: {printf("%d numarali salona giris yaptiniz.\n", salonno); }
			   break;
		default: {printf("uygun bir salon numarasi girmediniz..\n"); }
			break;
		}
	}
	system("pause");
	return 0;
}