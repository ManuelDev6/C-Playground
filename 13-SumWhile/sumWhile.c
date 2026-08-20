#include <stdio.h>

int main() {
	
	int num1;
	int num2;
	
	int sum;
	char opz = 'y';
	
	while(opz == 'y') {
		
		printf("\nInserisci il primo numero: ");
		scanf("%d", &num1);
		
		printf("\nInserisci il secondo numero: ");
		scanf("%d", &num2);
		
		sum = num1 + num2;
		printf("\nRisultato: %d", sum);
		
		printf("\nVuoi continuare: ");
		scanf(" %c", &opz);
		
	}
	
	return 0;
	
}
