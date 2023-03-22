#define NUM_ITER 142729

#include <header.h>

main_bench()
{
	int *a[5];
	int *b;
	b=(int *)malloc(5*sizeof(int));
	int i,j,k,l=0,m=0;
	for(i=0;i<5;i++)
	{
		a[i]=(int *)malloc(5*sizeof(int));
		*(b+i)=0;
		for(j=0;j<5;j++)
		{
			my_scanf("%d",*(a+i)+j);
			if(*(b+i)<*(*(a+i)+j))
				*(b+i)=*(*(a+i)+j);
		}
	}
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(*(b+i)==*(*(a+i)+j))
			{
				for(k=0;k<5;k++)
					if(*(b+i)<=*(*(a+k)+j))
						l++;
				if(l==5)
				{
					my_printf("%d %d %d",i+1,j+1,*(b+i));
					m++;
				}
				l=0;
			}
	if(m==0)
		my_printf("not found");
}