#include <stdio.h>
int main()
{
	int a=0,b=0;
	while(a<10){
		while(b<10){
			printf("*");
			b++;
		}
		printf("\n");
		a++;
		b=0;	
	}
 }
