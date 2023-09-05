#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()
{
	int n,i;
	printf("Apartir de que numero quieres imprimir?\n ");
	scanf("%d",&n);
	i=n;
	
	while(n<=i+10)
	{
		printf("%d\n",n);
		n=n+1;
	}
	
	printf("Acabe");
	return 0;
}
