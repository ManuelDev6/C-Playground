// Includo il file di intestazione

#include <stdio.h>

// Funzione principale

int main() {

	// Dichiarazione variabili utili al programma
	
	int num1;
	int num2;
	
	int sum;
	char opz = 'y';

	// Ciclo while
	
	while(opz == 'y') {

		// Inserimento primo numero
		
		printf("\nInserisci il primo numero: ");
		scanf("%d", &num1);

		// Inserimento secondo numero
		
		printf("\nInserisci il secondo numero: ");
		scanf("%d", &num2);

		// Calcolo somma
		
		sum = num1 + num2;
		printf("\nRisultato: %d", sum);

		// Fase per continuare il ciclo
		
		printf("\nVuoi continuare: ");
		scanf(" %c", &opz);
		
	}
	
	return 0;
	
}
