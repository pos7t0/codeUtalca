#include<stdio.h>
#include<stdlib.h>

int main(){
	
	srand(time(NULL));
	int numero_puesto=0;
	int numero_Ram=rand()%10+1,suma,resta,multi;
	float division;
	printf("************ATENCION************\n");
	printf("se haran los siguientes calculos\n");
	printf("con este numero %d\n",numero_Ram );
	printf("X + %d\n",numero_Ram);
	printf("X - %d\n",numero_Ram);
	printf("X * %d\n",numero_Ram);
	printf("X : %d\n",numero_Ram);
	printf("debera ingresar un numero entero\n");
	printf("que remplace la X\n");
	scanf("%d",&numero_puesto);
	printf("Analizando");
	suma=numero_puesto+numero_Ram;
	resta=numero_puesto-numero_Ram;
	multi=numero_puesto*numero_Ram;
	division=(float)numero_puesto/(float)numero_Ram;
	sleep(1);
	printf(" .");
	sleep(1);
	printf(" .");
	sleep(1);
	printf(" .\n");
	 
	printf("%d + %d = %d\n",numero_puesto,numero_Ram,suma);
	printf("%d - %d = %d\n",numero_puesto,numero_Ram,resta);
	printf("%d * %d = %d\n",numero_puesto,numero_Ram,multi);
	printf("%d : %d = %f\n",numero_puesto,numero_Ram,division);
	
	return 0;
}
