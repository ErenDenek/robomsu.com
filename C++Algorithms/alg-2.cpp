#include <iostream>
#include <string>

using namespace std;

string isimler[100];
int notlar[100];
int kisi;

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
	}
	
	
	return 0;
}
