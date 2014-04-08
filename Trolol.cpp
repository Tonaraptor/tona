#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Put your name\n");
	printf(":>>  \n");
	
	char Name[200];
	int i,j;

	scanf("%s",Name);
	fflush(stdin);
	

	for(i=0;i<100;i++){
		printf("\n");
		for(j=0;j<100;j++){
			printf("%s rules  ");
		}			
	}

}

