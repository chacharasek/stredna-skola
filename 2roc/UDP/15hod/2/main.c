#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,velkost;
	
	printf("zadaj velkost: ");
	scanf("%d",&velkost);
	
	for (i=velkost;i>=1;i--) {
		printf("\n");
		for (j=1;j<=i;j++) {
			printf(" ");
		}
		
	}
	
	
	return 0;
}