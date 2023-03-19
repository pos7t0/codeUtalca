#include<stdio.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	int x=1, Ramdon,aux=0;
	do{
		printf("ingrese [1] si quiere tener una nueva pieza o [2] si es que quiere salir\n");
		if(x==1){
			scanf("%d",&x);
			do{
				Ramdon=rand()%7+1;
			}while(aux==Ramdon);
			switch(Ramdon){
				case 1:{
					printf("   _\n");
					printf("  |_|\n");
					printf(" _|_|\n");
					printf("|_|_|\n");
					break;
				}
				case 2:{
					printf(" _ _\n");
					printf("|_|_|\n");
					printf("|_|_|\n");
					break;
				}
				case 3:{
					printf(" _\n");
					printf("|_|\n");
					printf("|_|\n");
					printf("|_|\n");
					printf("|_|\n");
					break;
				}
				case 4:{
					printf("   _\n");
					printf(" _|_|\n");
					printf("|_|_|\n");
					printf("  |_|\n");
					break;
				}
				case 5:{
					printf(" _\n");
					printf("|_|_ \n");
					printf("|_|_|\n");
					printf("  |_|\n");
					break;
				}
				case 6:{
					printf("   _\n");
					printf(" _|_|\n");
					printf("|_|_|\n");
					printf("|_|\n");
					break;
				}
				case 7:{
					printf(" _\n");
					printf("|_|\n");
					printf("|_|_\n");
					printf("|_|_|\n");
					break;
				}
			}
			aux=Ramdon;
		
		}
	}while(x==1);
	return 0;
}
