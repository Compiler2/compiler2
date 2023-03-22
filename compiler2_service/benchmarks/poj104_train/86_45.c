#define NUM_ITER 1259

#include <header.h>

int main_bench(){
	int a,b,n,m,p[100],i,j;
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf("%d",&m);	
		for(i=0;i<m;i++)
		{
			my_scanf("%d",&p[i]);
		}	
		if(m==0)
			my_printf("60\n");
		else
		{
			a=p[m-1]+m*3;
			if(a<=60)
				my_printf("%d\n",(60-a)+p[m-1]);
		    else if(a>60&&a<=63)
			    my_printf("%d\n",p[m-1]);
		    else{
			    for(i=m-1;i>=0;)
				{
					b=p[i]+(i+1)*3;
			        if(b<=60)
					{
						my_printf("%d\n",(60-b)+p[i]);
						break;
					}
			        else if(b>60&&b<=63)
					{
						my_printf("%d",p[i]);
						break;
					}
				    else
						i--;
				}
			}
		}
	}
	return 0;
}