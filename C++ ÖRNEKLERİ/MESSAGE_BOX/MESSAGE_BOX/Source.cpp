#include <iostream>
#include <windows.h> 

using namespace std;

int main()
{
	const int click = MessageBox(0, "NAPMAK ISTERSIN", "BUYRUN", MB_OKCANCEL | MB_ICONHAND);
	// switch case yapabilmek icin MessageBox degerini bir integer olarak atadik.
	// MessageBox(*,mesajcharadi,"Mesaj Basligi",Butonlar,Mesajkutusuikonu)

	switch (click) // click integerine gore yapalim
	{
	case IDOK: // Tiklanan buton OK ise
		cout << "Tamam'a bastiniz" << endl;
		break;
	case IDCANCEL: // Tiklanan buton Cancel ise
		cout << "Ýptal'e bastiniz" << endl;
		break;
	}
	 system("pause");
	 return 0;
}