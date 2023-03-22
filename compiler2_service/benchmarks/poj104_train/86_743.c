#define NUM_ITER 11808

#include <header.h>

int main_bench()
{
    int i,j,n,m,a,num,total=0;
    my_scanf("%d",&n);
    char chi[1000];
    for(i=0;i<n;i++)
    {
		my_scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
			my_scanf("%d",&a);
            total=a+3*j;
            if(total>60)
            break;
        }
        gets(chi);
        if(total<=62 && total>=60)
		{
			num=total-3*j;
            my_printf("%d\n",num);
        }
        else if(total<60)
		{
			num=60-3*m;
            my_printf("%d\n",num);
        }
        else
        {
			num=60-3*(j-1);
            my_printf("%d\n",num);
        }
    }
}