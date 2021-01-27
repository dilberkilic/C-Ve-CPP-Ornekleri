#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#include "daire.h"
#include "kare.h"
int main()
{
	printf("karenin cevresi:%d\n karenin alani:%d\n darenin cevresi:%f\n dairenin alaný:%f\n", cevre(5),alan(5),cevre(1.2),alan(1.2));
	system("pause");
	return 0;
}

int alan(int kenar)
{
	return kenar * kenar;
}
int cevre(int kenar)
{
	return kenar * 4;
}