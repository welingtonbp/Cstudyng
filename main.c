#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int frase[20];
	int i;
	
	for(i=0; i<20; i++){
		frase[i] = rand()%10;
	}
	
	printf("\n\nEste foi um teste para GITHUB !!!!\n\n");
	for(i=0; i<20; i++){
		printf("==> %d\n", frase[i]);
	}
	
	
	return 0;
}
