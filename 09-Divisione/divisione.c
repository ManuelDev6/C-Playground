// Includo il file di intestazione

#include <stdio.h>

// Funzione principale

int main() {
	
	// Variabili utili al programma
	
	int num1;
	int num2;
	
	int result;
	
	printf("CalcolaDivisione\n\n");
	
	// Inserimento primo numero
	
	printf("Inserisci il primo numero: ");
	scanf("%d", &num1);
	
	// Inserimento secondo numero
	
	printf("Inserisci il secondo numero: ");
	scanf("%d", &num2);
	
	// Stampa il risultato
	
	result = num1 / num2;
	printf("\nRisultato: %d", result);
	
	return 0;
	
}
