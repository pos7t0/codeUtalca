#include<stdio.h>
#include<stdlib.h>


int main(){
	srand(time(NULL));
	int M=3,N=3;
	int player1=0, player2=0,turno=1;
	char matriz[M][N];
	int i;
	int j;
	//es para inicializar la matriz
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			matriz[i][j]='*';
		}	
	}
	do{
		//es mi interfas grafica
		printf("   1   2   3\n");
		printf("1  %c | %c | %c \n ",matriz[0][0],matriz[0][1],matriz[0][2]);
		printf(" ---+---+---\n");
		printf("2  %c | %c | %c \n ",matriz[1][0],matriz[1][1],matriz[1][2]);
		printf(" ---+---+---\n");
		printf("3  %c | %c | %c \n",matriz[2][0],matriz[2][1],matriz[2][2]);
		//que el jugador ingrese los datos de jugadas 
		if(turno%2!=0 && player1!=3){
			printf("turno del jugador 1\n");
			printf("ingrese segun lo que quiere\n");
			printf("ingrese fila:(movimiento del jugador sera 1) \n");
			printf("ingrese columna:(movimiento del jugador sera %d)\n",player1+1);
		}
		if(turno%2==0 && player1!=3){
			printf("turno del jugador 2\n");
			printf("ingrese segun lo que quiere\n");
			printf("ingrese fila:(movimiento del jugador sera 2) \n");
			printf("ingrese columna:(movimiento del jugador sera %d)\n",player2+1);
		}
		
		sleep(1);
		if(turno%2!=0){
			matriz[0][player1]='X';
			player1++;
		}
		if(turno%2==0){
			matriz[1][player2]='O';
			player2++;
		}
		turno++;
	}while(player2!=3);
	printf("el jugador 1 ha ganado");
	
	
	return 0;
}
