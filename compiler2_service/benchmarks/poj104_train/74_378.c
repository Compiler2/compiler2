#define NUM_ITER 865113

#include <header.h>

int sushu (int i)
{
	int m,n=1;
	if (i==2) return (1);
	else
	for (m=2;m<=i-1;m++)
	{
		if (i%m==0)
		{
			n=0;
			break;
		}
      
	}
   if (n==1) return 1;
		else return 0;
}

int huiwen (int n)
{
	int i,j,k,m=0;
    j=0;
	k=n;
	for (i=0;j==0;i++)
	{
		if (k/10==0) j=1;
	    k=k/10;
	}
    
	k=n;
	for (j=1;j<=i;j++)
	{
		m=m*10+k%10;
        k=k/10;
	}
 	if (m==n) return 1;
	else return 0;
}

int main_bench()
{    
     int huiwen (int);
     int sushu (int);
     int a,b,c,i,j;
     c=0;
     my_scanf("%d %d",&a,&b);
	 for (i=a;i<=b;i++)
	 {
		 if (huiwen(i)*sushu(i)!=0) 
		 {
			 if (c==1) my_printf(",");
			 my_printf("%d",i);
			 c=1;
	
			  
		 }
		
	 }
	 if (c==0) my_printf("no\n");
}
