#define NUM_ITER 248557

#include <header.h>

main_bench()
{
	int k[52]={0},i,j,n,m,h=0;
	char a[300];
	my_scanf("%s",a);
	n=strlen(a);
	for(j=0;j<26;j++)
	{
		m=0;
		for(i=0;i<n;i++)
		{
			if(a[i]=='A'+j)
			{	m++;
			h++;}
		}
		
		if(m>0)
			my_printf("%c=%d\n",'A'+j,m);
	}
      for(j=0;j<26;j++)
	{  
		m=0;
		for(i=0;i<n;i++)
		{
			if(a[i]=='a'+j)
				{	m++;
			h++;}
		}
		if(m>0)
			my_printf("%c=%d\n",'a'+j,m);
	}
	  if(h==0)
		  my_printf("No");
}
        