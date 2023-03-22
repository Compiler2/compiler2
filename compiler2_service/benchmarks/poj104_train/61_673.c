#include <header.h>

void compute(int shuzu);
int main_bench()
{
	int n,i,k,sum=0,a,b;
	my_scanf("%d",&n);
	int *shuzu=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
           my_scanf("%d",&shuzu[i]);
    }
    for(i=0;i<n;i++)
    {
        if(shuzu[i]<=2)
        {
           my_printf("1\n");
        }else{ 
               a=1;
               b=1;
               for(k=3;k<=shuzu[i];k++)
               {
                   sum=a+b;
                   a=b;
                   b=sum;
               }
               my_printf("%d\n",sum);
              }
    }
    free(shuzu);	
	return 0;
}