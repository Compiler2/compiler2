#define NUM_ITER 1126042

#include <header.h>

int main_bench()
{
	int i,j,s=0;
	char w1[50],w2[50],*p1,*p2;
	my_scanf("%s%s",&w1,&w2);
	p1=w1;
	p2=w2;
	for(j=0;;j++)
	{
		for(i=0;*(p1+i)!='\0';i++)
		{
			if(*(p2+i+j)!=*(p1+i))
			{
				s=0;
				break;
			}
			else 
				s=1;
		}
		if(s==1)
		{
			my_printf("%d",j);
			break;
		}
    if(*(p2+j)=='\0')
	{
		my_printf("0");
		break;
	}
	}
	
}

