#define NUM_ITER 731129

#include <header.h>

int main_bench()
{
	int n,m,z=1,l=0,flag=0;
	int i=0,k=0,num=0;
	char s[50]={0},w[50]={0},mid[50]={0};
	my_scanf("%s %s",s,w);
	n=strlen(s);
	m=strlen(w);
	for(;l<m-1;)
	{
		for(i=0;i<n;i++,k++)
		{
			mid[i]=w[k];	
		}
		z++;
		k=z;
		num++;
		if(strcmp(mid,s)==0)
		{
			my_printf("%d\n",num);
			flag=1;
			break;
		}
		l++;
	}
	if(flag==0)
		my_printf("1");
}

			

		
	

