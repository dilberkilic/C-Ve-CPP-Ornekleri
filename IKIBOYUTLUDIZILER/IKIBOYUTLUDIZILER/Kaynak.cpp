#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int dizi[2][3];
	printf("lütfen verileri giriniz..\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d", &dizi[i][j]);
		}
	}
	printf("dizimizin elemanlari:");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("dizi[%d][%d]=%d\n",i,j,dizi[i][j]);
		}
	}
	system("pause");
	return 0;
}