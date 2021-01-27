#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 1;
	while (a < 11)
	{
		printf("%d ", a);
		a++;
	}
	printf("\n");
	for (char c= 'A'; c < 91; c++)
	{
		printf("%c ", c);
	}
	printf("\n");
	a = 'a';
	while (a<123)
	{
		printf("%c ", a);
		a++;
	}
	system("pause");
	return 0;
}