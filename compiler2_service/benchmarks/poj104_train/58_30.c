#define NUM_ITER 11652

#include <header.h>


int main_bench() 
{
	int i,j,n,k;
	char c;
	my_scanf("%d\n",&n);
	char *p[100];
	for(i=0;i<n;i++)
	{
		p[i]=(char *)malloc(100*sizeof(char));
		gets(p[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(p[i]);j++)
		{
			k=1;
			c=*(*(p+i)+j);
			if(j==0)
				if((c<'a'||c>'z')&&(c<'A'||c>'Z')&&c!='_')
				{
					k=0;break;
				}
			if(j!=0)
				if((c<'a'||c>'z') && (c<'A'||c>'Z')&& c!='_' && (c<'0'||c>'9'))
				{
				k=0;break;
				}
		}
		my_printf("%d\n",k);
	}
	return 0;

}