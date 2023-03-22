#define NUM_ITER 7872

#include <header.h>

int main_bench()
{
	int mark[305]={0},str[305],i,j,k,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",str+i);
	for(i=0;i<n;i++)
		if(*(mark+i)==0)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(*(str+j)==*(str+i))
					*(mark+j)=1;
		}
	for(i=0;i<k;i++)
		if(*(mark+i)==0)
			my_printf("%d,",*(str+i));
	my_printf("%d\n",*(str+k));
	return 0;
}