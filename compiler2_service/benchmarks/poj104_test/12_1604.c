#define NUM_ITER 1910571

#include <header.h>


int main_bench()
{
    int a[20]={0};
    int j,k,i=0,n=0,m=0;



        while((my_scanf("%d",&a[i]))&&(a[i]>=0))
        {
        
          if(a[i]==0)
		{
			for(j=0;j<i-1;j++)
			{
				for(k=j+1;k<i;k++)
				if(a[j]==2*a[k]||a[k]==2*a[j])
				m++;
			}
			my_printf("%d\n",m);
			m=0;
			i=0;
			for(j=0;j<20;j++)
			a[j]=0;
		}
    i++;


        }



    return 0;
}