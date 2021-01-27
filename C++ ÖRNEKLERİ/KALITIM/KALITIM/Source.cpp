#include <iostream>
#include <stdlib.h>
using namespace std;

class Hayvan
{
public:
	void uyuma() {};
	void kosma() {};
protected :
	int yas;
private :
	double boy;
};
class kopek:public Hayvan
{
public:
	kopek(int y) { yas = y; }
	void havlama() { cout << (yas >5 ? "how" : "hiw") << endl; };
};
class kedi : public Hayvan
{
public:
	kedi(int y) { yas = y; }
	void miyavlama() { cout << (yas > 2 ? "meow" : "miow") << endl; };
};
int main()
{
	kopek h1(4);
	kedi h2(5);

	h1.havlama();
	h1.kosma();
	h1.uyuma();

	h2.kosma();
	h2.miyavlama();
	h2.uyuma();



	system("pause");
	return 0;
}