#include <iostream>
#include <stdlib.h>   

using namespace std;

#define element 10

int randomArr[element];
int minVal,maxVal;

int main()
{
	
	for(int i=0;i<element;i++)
	{
		randomArr[i] = rand();
		cout << randomArr[i] << endl;
	}
	
	minVal = randomArr[0];
	maxVal = randomArr[0];
	
	for(int i=0;i<element;i++)
	{
		if( randomArr[i] < minVal) minVal = randomArr[i];
		if( randomArr[i] > maxVal) maxVal = randomArr[i];
	}
	
	cout << "En kucuk deger : " << minVal << endl;
	cout << "En buyuk deger : " << maxVal << endl;
	return 0;
}
