#define NUM_ITER 28829

#include <header.h>

main_bench()
{
	int m,k=0,i1,i2,x,y;
	my_scanf("%d",&m);
	for(i1=3;i1<=(m/2);i1=i1+2)
	{
	
		i2=m-i1;
        for(x=3;x<i1;x++)
			if((i1%x)==0) 
			{                         
				k=1;

			    break;
			}

		if(k!=1)
		{
			for(y=3;y<i2;y++)
			if((i2%y)==0) 
			{
				k=1;

			    break;
			}

		}
		if(k!=1) my_printf("%d %d\n",i1,i2);
		k=0;
	}
	return 0;
}