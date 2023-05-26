/*Realice un programa que lea un vector de seis elementos e intercambie las
posiciones de sus elementos, de tal forma que el primer elemento pase a
ser el ultimo y el ultimo el primero, el segundo el penultimo y asi sucesivamente, e imprima ese vector*/
#include<stdio.h>
main(){
	int x[6],c=0,m=0;
	for(int i=0;i<=5;i++){
		printf("Ingrese el valor en la casilla %i: ",i);
		scanf("%i",&x[i]);
	}
	printf("----------------Viejo Vector----------------\n");
	for(int l=0;l<=5;l++){
		printf("%i\n",x[l]);
	}
	for(int j=0;j<3;j++){
		c=x[j];
		x[j]=x[5-m];
		x[5-m]=c;
		m=m+1;
	}
	printf("----------------Nuevo Vector----------------\n");
	for(int k=0;k<=5;k++){
		printf("%i\n",x[k]);
	}
	return 0;
}
