#define NUM_ITER 27175

#include <header.h>

main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[100000];
		my_scanf("%s",a);
		int s=0,t,l,j,k;
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			t=0;
			for(k=0;k<l;k++)
			if(a[j]==a[k])  t++;
			if(t==1)  
			{my_printf("%c\n",a[j]);
			break;}
			s++;
		}
		if(s==l)  my_printf("no\n");
	}

}