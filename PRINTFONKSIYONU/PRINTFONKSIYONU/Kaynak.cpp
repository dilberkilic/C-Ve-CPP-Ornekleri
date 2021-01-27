#include <stdio.h>
#include <stdlib.h>
void sekil (int deger)
{
	printf("\n");
	for (int i = 0; i < deger; i++)
	{
		printf("-");
	}
	printf("\n");
}
int main()
{
	int karaktersayisi;
	karaktersayisi=printf("Abc\n");
	printf("%d\n", karaktersayisi);
	int ks;
	ks = printf("Hastane Otomasyon Programi");
	sekil(ks);
	system("pause");
	return 0;
}