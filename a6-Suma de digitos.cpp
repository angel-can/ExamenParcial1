#include<stdio.h>
#include<math.h>           

    int main()
{
	int n=0,n1=0,ndp,p=1,f1=1,r,r2,r3,s=0,RF;
   
    printf("Dame un numero y sumare sus digitos\n");
	scanf("%d",&n);
	
	if (n>10)
		{
		n1=n;   
		
		while(f1>0)
		{
			ndp=pow(10,p);	
			f1=n/ndp;
			p=p+1;
		}
	
	
		p=p-2;  
	
			while(n1>10)
			{
				ndp=pow(10,p);	  
				r=n1/ndp;	
				r2=n1-(r*ndp);      
	   			p=p-1;			
	    		ndp=pow(10,p);      
				r3=r2/ndp;        	
				n1=r2-(r3*ndp);  
				s=s+r+r3;		
			}	
			RF=s+n1;
		
			printf("\nLa suma de los digitos es %d",RF);
			
    	}
    	else
    	{
    		if(n==10)
    		{
    			printf("\nLa suma de los digitos es 1",n);	
			}
			else
			{
				 printf("\nLa suma de los digitos es %d",n);	
			}
   			
		}

	return 0;
}
