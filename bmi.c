#include <stdio.h>

int main(void) {
	float peso, altura, bmi;
	
	printf("Ingrese su peso en kilogramos: ");
	scanf("%f", &peso);
	
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	
	bmi = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n", bmi);
	
	printf("\nIndice       | Condicion\n");
	printf("-----------------------------\n");
	printf("<18.5        | Bajo peso\n");
	printf("18.5 a 24.9  | Normal\n");
	printf("25.0 a 29.9  | Sobrepeso\n");
	printf(">=30         | Obesidad\n");
	
	return 0;
}
