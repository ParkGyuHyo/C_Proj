#include<stdio.h>

int main()
{
	unsigned char a1=0xa1;
	unsigned char a2=0xe2;
	int i,j;
	
	for(i=1; i<6; i++)
	{
		for(j=1; j<i+1; j++)
				printf("%c%c", a1, a2);
		
		printf("\n");	
	}
	return 0;
}
