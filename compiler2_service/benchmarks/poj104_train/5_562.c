#define NUM_ITER 869576

#include <header.h>

int main_bench()
{
	double a;
	int i,n,m,t=0,k=0;
	char x[501],y[501];
	my_scanf("%lf\n",&a);
	gets(x);
	gets(y);
	n=strlen(x);
	m=strlen(y);
	if(n!=m)
		my_printf("error\n");
	else
	{
	 for(i=0;i<n;i++)
	 {  
		 if((x[i]!='A'&&x[i]!='G'&&x[i]!='T'&&x[i]!='C')||(y[i]!='A'&&y[i]!='G'&&y[i]!='T'&&y[i]!='C'))
		 {   
			 k=1;
			 my_printf("error\n");
			 break;
		 }
		else if(x[i]==y[i])
		{
			t++;
		} 
	 }
	 if(k!=1)
	 {
	  if((double)((double)t/(double)n)>a)
		  my_printf("yes\n");
	   else my_printf("no\n");
	 }
	}
	return 0;
}