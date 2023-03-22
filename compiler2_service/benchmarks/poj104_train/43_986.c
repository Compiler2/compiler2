#define NUM_ITER 25601

#include <header.h>

int main_bench()
{
	int m,j1,j2,i,d;
	my_scanf("%d",&m);
	for(j1=3;j1<=m/2;)
	{
         for(i=2;i<j1;i++)
		 {
			 d=j1%i;
			 if(d==0)break;
		 }
		 if(d==0){j1=j1+1;continue;}
		 else
		 {
			 j2=m-j1;
             for(i=2;i<j2;i++)
			 {
				 d=j2%i;
				 if(d==0)break;
			 }
		 }
		 if(d==0){j1=j1+1;continue;}
		 else{my_printf("%d %d\n",j1,j2);}
		 j1=j1+1;
	}
	return 0;
}