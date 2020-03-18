#include <iostream>
#include <stdlib.h>   

using namespace std;

#define element 10

int randomArr[element];
int temp;

int main()
{
	
	for(int i=0;i<element;i++)
	{
		randomArr[i] = rand();
		cout << randomArr[i] << endl;
	}
	
	 for(int i=1;i<element;i++)
    {
        for(int j=0;j<element-i;j++)
        {
            if(randomArr[j]>randomArr[j+1])
            {
                temp=randomArr[j+1];
                randomArr[j+1]=randomArr[j];
                randomArr[j]=temp;
            }   
        }       
    }
    
    cout << "************" << endl;
    
    for(int i=0;i<element;i++)
	{
		cout << randomArr[i] << endl;
	}
	return 0;
}
