#include <stdio.h>
#include <stdlib.h>
int fak(int);
int recursive(int);
int recursivetoplama(int say)
{
	if (say == 0)
	{
		return 0;
	}
	return say + recursivetoplama(say - 1);
}
int main()
{
	printf("%d\n", recursivetoplama(5));
	printf("%d \n", recursive(6));
	system("pause");
	return 0;
}
int recursive(int sayi)
{
	if (sayi == 1)
	{
		return 1;
    }
	return sayi *recursive(sayi - 1);
}
int fak(int sayi)
{
	int sonuc = 1;
	for (int i = sayi; i >= 1; i--)
	{
		sonuc = sonuc * i;
	}
	return sonuc;
}