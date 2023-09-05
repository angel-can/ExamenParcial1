#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,w=1;
	while(w==1)
	{
		printf("Apartir de que numero quieres imprimir?\n ");
		scanf("%d",&n);
		i=n;	
	
		while(n<=i+10)
		{
			printf("%d\n",n);
			n=n+1;
		}
	printf("Presiona:\n-1 par volver a sumar un numero\n-Cualquier otro numero para salir\n");
	scanf("%d",&w);
	}
	return 0;
}
