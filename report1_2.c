#include<stdio.h>

int main(){
	
	unsigned char a1=0xa1;
	unsigned char a2=0xe1;
	int i;
	for (i=0; i<5; i++){
		printf("%c%c", a1, a2);
	}
	printf("\n");
	for (i=0; i<2; i++){
		printf("%c%c", a1, a2);
	}
	printf("\n");
	for (i=0; i<2; i++){
		printf("%c%c", a1, a2);
	}
	printf("\n");
	for (i=0; i<5; i++){
		printf("%c%c", a1, a2);
	}
	printf("\n");
	
	return 0;
}
