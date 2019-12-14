#include <stdio.h>
#include <math.h>


int main(){
	
	float a, b, c, delta, x, x1, x2, xv, yv;

	printf("Insira o valor de a: "); //mensagem a ser exibida na tela
	scanf("%f", &a); //captura o valor de a pelo teclado
	
	if(a != 0){ //se a for diferente de zero então faça

		printf("Insira o valor de b: "); //mensagem a ser exibida na tela
		scanf("%f", &b); //captura o valor de b pelo teclado
		printf("Insira o valor de c: "); //mensagem a ser exibida na tela
		scanf("%f", &c); //captura o valor de c pelo teclado
		printf("\nf(x) = %.2fx^2 + (%.2f)x + (%.2f)", a, b, c); //exibindo o f(x)
		
		delta = pow(b, 2) - 4 * a * c; //calculando o valor de delta
		printf("\ndelta = %.2f", delta); //exibe o valor de delta
		
		if(delta > 0){ //se delta for maior que zero vamos ter duas raízes reais e distintas
			
			x1 = (-b + sqrt(delta))/2 * a; //calculando o valor de x1
			x2 = (-b - sqrt(delta))/2 * a; //calculando o valor de x2
			
			printf("\nDelta > 0, f(x) tem duas raízes reais e distintas");
			printf("\nx1 = %.2f \nx2 = %.2f", x1, x2); //exibe os valores de x1 e x2 
		}
		
		if(delta == 0){ //se delta for igual a zero vamos ter uma única raiz real
			
			x = (-b + sqrt(delta))/2 * a; //calcula o valor da única raiz
			
			printf("\nDelta = 0, uma única raiz real");
			printf("\nx = %.2f", x); //exibe o valor da raiz
		
		}
		
		if(delta < 0){ //se delta < 0 não existe raíz real
			
			printf("\nDelta < 0, não existem raízes reais"); //mensagem a ser exibida
		
		}
		
		xv = (-b)/(2*a); //cálculo do x vértice
		yv = (-delta)/(4 * a); //cálculo do y vértice
		
		printf("\nxv = %.2f\nyv = %.2f", xv, yv); //exibe os valores de x vértice e y vértice

		
	}else{ //senão exiba a mensagem de erro

		printf("\nFunção inválida pois a = 0"); //mensagem de erro

	}
	return 0;
}

