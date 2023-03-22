#define NUM_ITER 350376

#include <header.h>


int main_bench()
{
	char w1[50]={0},w2[50]={0};
	int i=0,n,k,flag;
	my_scanf("%s%s",w1,w2);
	n=strlen(w1);
	for(i=0;i<50;i++)
	{
		if(n==1)
		{	if(w2[i]==w1[0])
			{
			  my_printf("%d",i);
			  goto end;
			}
		}
		else if(n>=2)
		{
			flag=0;
			for(k=0;k<n;k++)
			{
				if(w1[k]!=w2[k+i])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				my_printf("%d",i);
				goto end;
			}
		}
	}

	
end:;
}

