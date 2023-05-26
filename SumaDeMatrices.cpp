//Realizar un programa en el que se pida dos matrices (2x3) y se sumen
#include<stdio.h>
main(){
	int x[2][3], y[2][3], suma[2][3],i,j;
	printf("---------------MATRIZ UNO------------\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			printf("Ingrese el valor de la casilla %i, %i: ",i,j);
			scanf("%i",&x[i][j]);
		}
	}
	printf("---------------MATRIZ DOS------------\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			printf("Ingrese el valor de la casilla %i, %i: ",i,j);
			scanf("%i",&y[i][j]);
		}
	}
	printf("---------------MATRIZ SUMA------------\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			suma[i][j]=x[i][j]+y[i][j];
			printf("El valor en la casilla %i, %i es: %i\n",i,j,suma[i][j]);
		}
	}
	return 0;
}
