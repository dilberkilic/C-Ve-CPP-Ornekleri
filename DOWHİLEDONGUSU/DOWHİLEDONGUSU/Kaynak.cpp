#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 15;
	do
	{
	if (x % 7 == 0)
	printf("%d ", x); 
	x++;
	} 
	while (x<80);
	printf("\n");
	int y = 5;
	while (y<125)
	{
		if (y % 5 == 0)
			printf("%d ", y);
		y++;
	}
	printf("\n");
	for (int z = 9; z < 758; z++)
	{
		if (z % 9 == 0)
			printf("%d ", z);

	}
	system("pause");
	return 0;
}