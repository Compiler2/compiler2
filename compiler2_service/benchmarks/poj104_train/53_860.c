#define NUM_ITER 7731

#include <header.h>

int main_bench()
{
	int n,i,name[300],j,m,k=1,t=0,count[300];
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&name[i]);
	}
	my_printf("%d,",name[0]);
    for(m=1;m<n;m++)
	{
         for(j=m-1;j>=0;j--)
		 {
			 if(name[m]==name[j])
			 {
				k=0;
				break;
			 }else
			 {
				 k++;
			 }
		 }
		 if(k!=0)
		 {
             count[t]=name[m];
			 t++;
		 }
		 k=1;
	}
	for(i=0;i<t-1;i++)
	{
		my_printf("%d,",count[i]);
	}
	my_printf("%d",count[t-1]);
	return 0;
}