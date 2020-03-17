#include <iostream>
#include <string>
#include <conio.h> // to use the system pause cmd "getch()"

using namespace std;

string isim,soyad;
int yas;


int main()
{
	cout << "Lutfen isminizi giriniz: ";
	cin >> isim;
   
        cout << "Lutfen soyadinizi giriniz: ";
	cin >> soyad;
		
	cout << "Lutfen yasinizi giriniz: ";
	cin >> yas;
    
        cout << "Ismiziniz: " << isim << " Soyadiniz: " << soyad << " Yasiniz: " << yas;
	 
	return 0;
}
