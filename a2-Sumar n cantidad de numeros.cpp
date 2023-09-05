#include<stdio.h>
#include<math.h>

int main()
{
	int w=1;
	float n;
	long int R;
	
	while(w==1)
	{
		printf("Sumando a partir del 0, Hasta que numero quieres sumar?\n");
		scanf("%f",&n);
		
		R=(n/2)*(n+1);	
		
		printf("\nEl resultado es %d\n\n",R);
		
		printf("Presiona:\n-1 par volver a sumar un numero\n-Cualquier otro numero para salir\n");
		scanf("%d",&w);
    }
	return 0;
}
