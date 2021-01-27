#include <iostream>
#include <stdlib.h>
using namespace std;

namespace bir 
{ int x;
void yaz()
{
	cout << "Suan 1.namespacedesiniz.x=" << x << endl;
}
}

namespace iki 
{ 
	int x; 
	void yaz()
	{
		cout << "Suan 2.namespacedesiniz.x=" << x << endl;
	}
}

using namespace bir;

int main()
{
	x = 6;
	iki::x = 8;
	bir::yaz();
	iki::yaz();
	system("pause");
	return 0;
}