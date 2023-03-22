#define NUM_ITER 995184

#include <header.h>


int main_bench()
{
	int i,j;
	char c[100],a[100],b[100];
	my_scanf("%s%s",a,b);
	for(i=0;i<strlen(b);i++)
	{
		if(b[i]==a[0])
		{
			for(j=0;j<strlen(a);j++) 
				c[j]=b[i+j];
			c[j]='\0';
		}
		if(strcmp(c,a)==0) {my_printf("%d\n",i);break;}
	}
	return 0;
}