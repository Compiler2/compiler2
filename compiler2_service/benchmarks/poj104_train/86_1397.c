#include <header.h>

int main_bench()
{	int m,n,k,i,j,time,sum;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{	my_scanf("%d",&m);
		time=0;
	    sum=0;
	    if(m==0)
                my_printf("60\n");
        else
       {	 for(j=1;j<=m;j++)
        	{ 	my_scanf("%d",&k);
				if((k+3*j)>60&&(k-sum>=60-time))  
                    continue;
            	else if(time>60)
            		continue;
            	else
            		sum=k;
            	time=k+3*j;
        	}
    	if(time<60)
            sum+=60-time;
        my_printf("%d\n",sum);
       }
	}
	return 0;
}