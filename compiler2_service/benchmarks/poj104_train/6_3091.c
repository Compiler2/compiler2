#define NUM_ITER 32

#include <header.h>



main_bench()
{	
	int*p,i,all,m,n,cycle,ii;
	
	my_scanf("%d",&cycle);
	for(ii=0;ii<cycle;ii++)
	{
		my_scanf("%d %d",&m,&n);
		p=(int*)calloc(m*n,sizeof(int));
		for(i=0;i<m*n;i++)
			my_scanf("%d",p+i);
		all=0;
		for(i=0;i<n;i++)
			all+=*(p+i);
		if (m>1)
		{
			for(i=0;i<n;i++)
				all+=*(p+i+(m-1)*n);
		}
		for(i=2;i<m;i++)
			all+=*(p+(i-1)*n);
		if (n>1)
		{
			for(i=2;i<m;i++)
				all+=*(p+n-1+(i-1)*n);
		}
		my_printf("%d\n",all);
		free (p);
	}
	
	
}