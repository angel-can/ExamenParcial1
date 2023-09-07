#include<stdio.h>
#include<math.h>

int main()
{
	int n,n1,f1=0,f2=0,f3=0,f4=0,e1=59,e2=60,a=1,a2,t;
	printf("Dame la cantidad de pisos que va a tener tu arbol\n");
	scanf("%d",&n);
	
	if (n>0)
	{
		while(f1<n)
		{
			while(f2<e1)
			{	
				printf(" ");	
				f2++;
			}
			while(f3<a)
			{
			 	printf("*");	
			 	f3++;
			}
			while(f4<e2)
			{
				printf(" ");	
				f4++;
			}
			printf("\n");
		
		
			f1++;
			f2=0;
			e1--;
			f3=0;
			a=a+2,
			f4=0;
			e2--;
		
		
		
		}
			while(f2<59)
			{
				printf(" ");	
				f2++;
			}
		printf("||\n");
	}
	else
	{
		n=n*-1;
		n1=n;
		a2=2*n-1;
		t=0;
		
		while(t<58)
			{
				printf(" ");	
				t++;
			}
		printf("||\n");
		
		while(f1<n)
		{
		
		//int n,f1=0,f2=0,f3=0,f4=0,e1=59,e2=60,a=1;
			while(f2<e1-n1)       
			{	
				printf(" ");	//51
				f2++;
			}
			while(f3<a2)
			{
			 	printf("*");	//15
			 	f3++;
			}
			while(f4<e2-n1)
			{
				printf(" ");	//52
				f4++;
			}
			printf("\n");
			-
			f1++;
			f2=0;
			f3=0;
			a2=a2-2;
			f4=0;
			n1--;
		
			
		}
		
	}
		printf("fin");
		return 0;
}
