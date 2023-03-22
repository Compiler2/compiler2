#define NUM_ITER 654654

#include <header.h>

main_bench()
{
	char s[50],w[50],x[50],y;
	int len_s,len_w,i,j;
	my_scanf("%s %s",s,w);
	len_s=strlen(s);
	len_w=strlen(w);
	for(i=0;i<len_w;i++)
	{
		if(w[i]=s[0])
		{
			for(j=0;j<len_s;j++)
			x[j]=w[i+j];
			y=strcmp(x,s);
			if(y==0)
			{my_printf("%d",i);
			break;}
		}
	}
}
			
