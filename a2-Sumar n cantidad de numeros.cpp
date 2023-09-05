#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()
{
	int R,w=1;
	float n;
	
	system("color f9");
	while(w==1)
	{
	printf("Sumando a partir del 0, Hasta que numero quieres sumar?\n");
	scanf("%f",&n);
	R=(n/2)*(n+1);	
	system("cls");
	printf("\nEl resultado es %d\n\n",R);
	printf("Presiona:\n-1 par volver a sumar un numero\n-Cualquier otro numeor para salir\n");
	scanf("%d",&w);
    }
	return 0;
}
