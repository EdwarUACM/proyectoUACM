#include<stdlib.h>
#include<stdio.h>
#include <cmath>
float calcularRaiz(float);

int main()
{  
    
	int i;
	float numeros[4]={4,5,7,2};
	printf("Este es un mensaje nuevo!\n");
	for(i=0;i<4;i++)
	{
		printf("Numero %.1f Raiz: %f\n",numeros[i],calcularRaiz(numeros[i]));
	}
	

	
	
	
}

float calcularRaiz(float numero)
{
	
	float UMBRAL=0.01;
	float ini,aprox,fin,medio;
	float error=1;
	ini=0;
	fin=numero;
	int i=0;
	
    while(error>=UMBRAL)
	{
		medio=(ini+fin)/2;
		aprox=medio;
		error=abs((pow(medio,2))-numero);
		if((medio*medio)<numero)
		{  
			ini=medio;
		}
		if((pow(medio,2))>numero)
		{
			fin=medio;
		}
		i++;
	}
	return aprox;
}


/*
float calcularRaiz(float numero)
{
	
	float UMBRAL=0.01;
	float ini,aprox,fin,medio;
	float error=1;
	ini=0;
	fin=2;
    do
	{
		medio=(ini+fin)/2;
		aprox=medio;
		error=abs((medio*medio)-numero);
		if(error>UMBRAL)
		{
			return aprox;
		}
		else
		{
			if((medio*medio)<numero)
			{  
			    printf("Entre en el ini=medio\n");
			    printf("El aprox= %f\n",aprox);
				ini=medio;
			}
			if((medio*medio)>numero)
			{
			    printf("Entre en el fin=medio\n");
			    printf("El aprox= %f\n",aprox);
				fin=medio;
			}
		}
	}while(error>UMBRAL);
	return error;
}
*/


