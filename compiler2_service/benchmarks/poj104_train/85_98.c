#define NUM_ITER 28063

#include <header.h>

int main_bench()
{

	int i,n,j,c,a;
	my_scanf("%d",&n);		
	
	for(j=0;j<n;j++)
		{	c=0;
		a=0;
		char s[21];
	      my_scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
		{		
		if(s[0]==95||(s[0]<=122&&s[0]>=97)||(s[0]<=90&&s[0]>=65))
				c++;
		       a++;
		 if(s[i]==95||(s[i]<=122&&s[i]>=97)||(s[i]<=90&&s[i]>=65)||(s[i]<=57&&s[i]>=48))
		 	c++;
		     a++;
		 
	}
		
	if(c==a)
	{my_printf("yes\n");}
    else
	{my_printf("no\n");}	
	}


	return 0;
}

