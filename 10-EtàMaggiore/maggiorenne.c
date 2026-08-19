// Includo il file di intestazione

#include <stdio.h>

// Funzione principale

int main() {
	
	int age;
	
	// Inserimento anni
	
	printf("Quanti anni hai? ");
	scanf("%d", age);
	
	// Maggiore
	
	if (age >= 18) {
		
		printf("Sei maggiorenne!");
		
	}
	
	// Minore
	
	else {
		
		printf("Sei minorenne!");
		
	}
	
	return 0;
	
}
