#define NUM_ITER 22876

#include <header.h>

main_bench()
{int t,i,j,k=0,z,y,m=0,c[100000];
	char s[100000];
	my_scanf("%d",&y);
	for(z=0;z<y;z++)
{
	m=0;
	my_scanf("%s",s);
	
	 
	for(i=0;s[i];i++)c[i]=0;
	for(i=0;s[i];i++)
	{
		k=0;
		for(j=0;s[j];j++)
		{
			if(s[i]==s[j]) c[i]++;
		}
		
	}
	for(i=0;s[i];i++)
	{
		if(c[i]==1) {
		my_printf("%c\n",s[i]);m++;break;}
	}
	if(m==0)my_printf("no\n");
 
}
}