#define NUM_ITER 1118434

#include <header.h>

int main_bench()
{
	char s[50], w[50];
	my_scanf("%s %s",s,w);
	char*p,*l,*t;
	int m,n;
	
	int k=0;
	for(t=s;*t!='\0';t++)
	{
		k++;
	}
	n=0;m=0;
	for(l=w;*l!='\0';l++&&n++)
	{

		for(p=s;*p!='\0'&&*l!='\0'&&*l==*p;p++&&l++)
		{
			m++;
		}
		
	
		if(m==k)
		{
			
			my_printf("%d",n);
			break;
		}
	
	}



	

	
	return 0;
}