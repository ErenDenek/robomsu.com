#include <iostream>
#include <stdlib.h>   

using namespace std;

#define element 10

int randomArr[element];

int main()
{
	
	for(int i=0;i<element;i++)
	{
		randomArr[i] = rand();
		cout << randomArr[i] << endl;
	}
	
	
	return 0;
}
