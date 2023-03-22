#define NUM_ITER 27248

#include <header.h>

int main_bench()
{
	int n,i,lw,len=0;
	char p[100],w[100];
	my_scanf("%d",&n);
	strcpy(p,"");
    for(i=0;i<n;i++)
	{
		my_printf("%s",p);
		my_scanf("%s",w);
		lw=strlen(w);
		if(len+lw>80)
		{
			my_printf("\n");
			len=0;
		}else if(i!=0)my_printf(" ");
		len+=lw+1;
		strcpy(p,w);
	}
	my_printf("%s\n",p);
	
	return 0;
}

