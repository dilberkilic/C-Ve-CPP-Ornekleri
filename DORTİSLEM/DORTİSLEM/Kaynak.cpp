#include <stdio.h>
#include <stdlib.h>
int main() {
	//2 sayi alalim , 4 islem sonuclarini ekrana yazdiralim.
	int  sa1, sa2;
	printf("iki sayi giriniz:");
	scanf_s("%d %d", &sa1, &sa2);
	printf("toplam:%d\n", sa1 + sa2);
	printf("fark:%d\n", sa1 - sa2);
	printf("carpim:%d\n", sa1*sa2);
	printf("bolum:%f\n", ((float)sa1 / sa2));
	printf("mod:%d\n", sa1 % sa2);
	system("pause");
	return 0;
}
