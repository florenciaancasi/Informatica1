#include <stdio.h>

int main(void) {
	float peso, altura, bmi;
	
	printf("Ingrese su peso en kg: " ,&altura);
	scanf("%f", &peso);
	printf("Ingrese su altura en m: " ,&altura);
	scanf("%f", &altura);
	
	bmi = peso/(altura*altura);
	
	if (bmi< 18.5)
	{
		printf("Su indice de masa corporal es %f\n", bmi);
		printf("Condicion: peso bajo");
	}
	else if(bmi>18.5f && bmi<24.9f)
	{
		printf("Su indice de masa corporal es %f\n", bmi);
		printf("Condicion: peso normal");
	}
	else if(bmi>25.0f && bmi<29.9f)
	{
		printf("Su indice de masa corporal es %f\n", bmi);
		printf("Condicion: sobrepeso");
	}
	else if(bmi>= 30.0f)
	{
		printf("Su indice de masa corporal es %f\n", bmi);
		printf("Condicion: obesidad");
	}
	return 0;
}
