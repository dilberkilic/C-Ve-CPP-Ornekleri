#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
#define DEBUG
#define f(x) (x*x+x*2+5)

#pragma warning(disable:4996)

int main()
{
	printf("%d\n", f(5));

#ifdef DEBUG
	printf("bu satir debug satiridir");
#endif // DEBUG

#ifndef PI
#define PI 3.14
#endif // !PI

	system("pause");
	return 0;
}