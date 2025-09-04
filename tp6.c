#include <stdio.h>
#include <math.h>


float calcularAreaRectangulo(float alt, float lon);
float calcularPerimetroRectangulo(float alt, float lon);
float calcularDiagonalRectangulo(float alt, float lon);

float calcularAreaCirculo(float rad);
float calcularPerimetroCirculo(float rad);

void imprimirResultados(float area, float perimetro, float diagonal);


int main(void) {
	int opcion;
	float rad, lon, alt;
	float area, perimetro, diagonal;
	
	printf("ingrese la figura: (1: rectangulo, 2: Circulo): ");
	scanf("%d", &opcion);
	
	switch(opcion){
	case 1:
		{
			printf("Opcion de rectangulo seleccionada\n");
			printf("Ingrese la altura del rectangulo: ");
			scanf("%f", &alt);
			printf("Ingrese la longitud del rectangulo: ");
			scanf("%f", &lon);
			
			area = calcularAreaRectangulo(alt, lon);
			perimetro = calcularPerimetroRectangulo(alt, lon);
			diagonal = calcularDiagonalRectangulo(alt, lon);
			
			imprimirResultados(area, perimetro, diagonal);
			
			break;
		}
		
	case 2:
		{
			printf("Opcion de circulo seleccionada\n");
			printf("Ingrese el radio del circulo: ");
			scanf("%f", &rad);
			
			area = calcularAreaCirculo(rad);
			perimetro = calcularPerimetroCirculo(rad);
			
			imprimirResultados(area, perimetro, diagonal);
			
			break;
		}
		
	}

	return 0;
}

float calcularAreaRectangulo(float alt, float lon){
	float area;
	area = alt * lon;
	return area;
}
	
	float calcularPerimetroRectangulo(float alt, float lon){
		float perimetro;
		perimetro = 2 * (alt + lon);
		return perimetro;
	}
		
	float calcularDiagonalRectangulo(float alt, float lon){
		float diagonal;
		diagonal = sqrt(pow (lon, 2) + pow (alt,2));
		return diagonal;
	}
		
	float calcularAreaCirculo(float rad){
		float area;
		const float pi = 3.1415;
		area = (pow (rad, 2)) * pi;
		return area;
	}
		
	float calcularPerimetroCirculo(float rad){
		float perimetro;
		const float pi = 3.1415;
		perimetro = 2 * rad * pi;
		return perimetro;
	}
		
	void imprimirResultados(float area, float perimetro, float diagonal){
		printf("El area es: %.2f\n", area);
		printf("El perimetro es: %.2f\n", perimetro);
		if (diagonal > 0) { 
			printf("La diagonal es: %.2f\n", diagonal);
		}
	}
