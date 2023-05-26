/*Aplicar a un vector de 5 posiciones un metodo de ordenamiento, obtener en 
imprimir, el mayor, el menor, la media y la desviacion estandar.*/
#include<stdio.h>
#include<math.h>
main(){
	int x[5],i,j,hold, mayor=-666, menor=-666, suma=0;
	float prom, desviacion, varianza=0, rango;
	for(i=0;i<=4;i++){
		printf("Ingrese el valor en la casilla %i: ",i);
		scanf("%i",&x[i]);
	}	
	for(i=0;i<=4;i++){
		for(j=i+1;j<=4;j++){
			if(x[i]>x[j]){
				hold=x[i];
				x[i]=x[j];
				x[j]=hold;
			}
		}
	}
	for(i=0;i<=4;i++){
		if(menor==-666){
			menor=x[i];
		}else{
			if(x[i]<menor){
				menor=x[i];
			}
		}
		if(mayor==-666){
			mayor=x[i];
		}else{
			if(x[i]>mayor){
				mayor=x[i];
			}
		}
		suma=suma+x[i];
	}
	prom=float(suma)/5;
	for(i=0;i<=4;i++){
		rango=pow(float(x[i])-prom,2);
		varianza=varianza+rango;
	}
	varianza=varianza/5;
	desviacion=sqrt(varianza);
	printf("---------------VECTOR ORDENADO---------------\n");
	for(i=0;i<=4;i++){
		printf("El valor en la casilla %i es: %i\n",i,x[i]);
	}
	printf("---------------VECTOR ORDENADO---------------\n");
	printf("El valor mayor es: %i\nEl valor menor es: %i\nLa media es: %0.2f\nLa desviacion estandar es: %0.2f",mayor,menor,prom,desviacion);
	return 0;
}
