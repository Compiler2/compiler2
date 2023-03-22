#define NUM_ITER 1280

#include <header.h>

 
int main_bench()
{
    int n,k,*p,i,j ;
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&k);
		p=(int*)malloc(sizeof(int)*k);
		if(k==0)my_printf("60\n");
		else
		{
			for(j=0;j<k;j++)
			{
				my_scanf("%d",&*(p+j));
			}
			if(p[k-1]+3*(k)<=60)my_printf("%d\n",60-k*3);
			else{
				for(j=0;j<k;j++)
				{
					if(p[j]+3*j>60)
					{
						my_printf("%d\n",60-j*3);
						break;
					}
					if(p[j]+3*(j+1)>60)
					{
						my_printf("%d\n",p[j]);
						break;
					}
				}
		    }
		 }
	}
	return 0;
}


 