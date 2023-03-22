#define NUM_ITER 480545

#include <header.h>

int main_bench()
{
    int i,j,count=0;
	char s[50],w[50],*ps;
	my_scanf("%s %s",s,w);
    for(i=0;i<50;i++)
	{
		if(w[i]==s[0])
		{
			j=i;
			for(ps=s;*ps!='\0';ps++,i++)
			{
               if(*ps!=w[i])
				   count++;
			}
			if(count==0)
				my_printf("%d",j);
	
		}
	}
	return 0;
}