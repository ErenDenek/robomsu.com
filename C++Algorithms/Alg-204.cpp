#include <iostream>
#include <stdlib.h>   

using namespace std;

#define element 10

int randomArr[element];
int reverseArr[element];

int newArr[element*2];

int minVal,maxVal;

int main()
{
	
	for(int i=0;i<element;i++)
	{
		randomArr[i] = rand();
		cout << randomArr[i] << endl;
	}
	
	cout << "************" << endl;
	
	for(int i=0;i<element;i++)
	{
		reverseArr[i] = randomArr[element-i-1];
		cout << reverseArr[i] << endl;
	}
	
	cout << "************" << endl;
	
	for(int i = 0;i < element;i++)
	{
		newArr[i] = randomArr[i];
		newArr[i+10] = reverseArr[i];
	}
	
	minVal = reverseArr[0];
	maxVal = reverseArr[0];
	
	for(int i=0;i<element;i++)
	{
		if( reverseArr[i] < minVal) minVal = reverseArr[i];
		if( reverseArr[i] > maxVal) maxVal = reverseArr[i];
	}
	
	cout << "En kucuk deger : " << minVal << endl;
	cout << "En buyuk deger : " << maxVal << endl;
	return 0;
}
