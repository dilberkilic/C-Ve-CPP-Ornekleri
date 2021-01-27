#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	cout << "Merhaba C++\n";

	cout << "Lutfen iki sayi giriniz...\n";

	int sayi1, sayi2;

	/*std::cin >> sayi1;
	std::cin >> sayi2;*/

	cin >> sayi1 >> sayi2;

	cout << "Iki sayinin toplami = " << sayi1 + sayi2 <<std::endl;




	system("pause");
	return 0;
}