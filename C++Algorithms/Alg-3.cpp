#include <iostream>
#include <string>

using namespace std;

string isimler[100];
int notlar[100];
int kisi;
int toplam;
float ortalama;

int main()
{
	
	cout << "Sinif mevcudunu giriniz : ";
	cin >> kisi;
	
	for(int i=0;i<kisi;i++)
	{
		cout << "Not sahibinin ismini giriniz : ";
		cin >> isimler[i];
		
		cout << "Kisinin notunu giriniz: ";
		cin >> notlar[i]; 
		
		toplam += notlar[i];
		
	}
	
	ortalama = toplam / kisi;
	
	cout << "Sinif ortalamasi : " << ortalama;
	
	return 0;
}
