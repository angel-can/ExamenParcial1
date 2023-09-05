#include<stdio.h>
#include<math.h>

int main()
{
	int n,f=0,f2=-1,w=1;
	while(w==1)
	{
		printf("Dime el tope de una lista para sacar los impares. Empieza apartir del 0\n");
		scanf("%d",&n);
		printf("lista hasta el numero %d\n",n);
			while(f<n)
			{
				f2=f2+2;
				printf("-%d\n",f2),
				f=f+2;
			}
	
		printf("Presiona:\n-1 par volver a sumar un numero\n-Cualquier otro numero para salir\n");
		scanf("%d",&w);
	}

	return 0;
}
