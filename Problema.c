#include <stdio.h>

//Desenvolva um programa em C que desenhe na sa�da um tri�ngulo, � partir da altura dada. 
//O programa deve calcular tamb�m a �rea do tri�ngulo.

int main()

{

int altura;
int base;
int area;
	
printf("Digite um valor para altura: \n");
scanf("%i", &altura);

base = (2 * altura) - 1;
area = (base*altura) / 2;

for(int linha = 0; linha < altura; linha++){
	
for(int coluna = 0; coluna < base; base++){
}


printf("A area do triangulo e: %i", area);

return 0;

}
