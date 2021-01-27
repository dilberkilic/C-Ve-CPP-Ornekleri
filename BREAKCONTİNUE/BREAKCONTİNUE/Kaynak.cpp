#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sayi = 0;
	while (true)
	{
		
		sayi++;

		if (sayi % 3 == 0)
			continue;

		if (sayi > 50)
		{
			break;
		}
	
		printf("%d ", sayi);
	}
	system("pause");
	return 0;
}