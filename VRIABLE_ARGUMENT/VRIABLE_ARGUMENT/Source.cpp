#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
double ort (int sayi,...)
{
	double toplam=0;
	va_list listemiz;
	va_start(listemiz, sayi);//baþlatma
	for (int i = 0; i < sayi; i++)
	toplam += va_arg(listemiz, int);
	va_end(listemiz);
	return toplam / sayi;
}
int main()
{
	printf("%.2f\n", ort(5, 125, 136, 148, 150, 160));
	system("pause");
	return 0;
}