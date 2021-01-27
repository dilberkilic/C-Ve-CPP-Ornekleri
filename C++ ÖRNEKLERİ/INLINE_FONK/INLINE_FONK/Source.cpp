#include <iostream>
#include <stdlib.h>
using namespace std;
inline int kareal(int x)//düþük kapasiteli bilgisayarlar için uygun 
{
	int sonuc = 1;
	sonuc = x * x;
	return sonuc;
}

int main()
{
	for (int i = 0; i <1000; i++)
	{
		cout << kareal(i) << endl;
		i++;
	}
	system("pause");
	return 0;
}