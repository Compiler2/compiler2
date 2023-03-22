#define NUM_ITER 42910

#include <header.h>


int main_bench()
{
    int n;
    double max=0;
    int num[310]={0};
    int out[310]={0};
    double sum=0,avr=0;
    int i=0,j=0,k=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&num[i]);
        sum += num[i];
    }
    avr=sum/n;



    for(i=0;i<n;i++)
    {
        if(fabs(num[i]-avr)>max)
            max=fabs(num[i]-avr);
    }

    

    for(i=0;i<n;i++)
    {
        if(max-(fabs(num[i]-avr))<1e-5)
        {
            out[j]=num[i];
            j++;
        }
    }
    for(i=0;i<j-1;i++)
    {
        for(k=0;k<j-i-1;k++)
        {
            if(out[k]>out[k+1])
            {
                int tmp=out[k];
                out[k]=out[k+1];
                out[k+1]=tmp;
            }
        }
    }
    for(i=0;i<j-1;i++)
        my_printf("%d,",out[i]);
    my_printf("%d",out[j-1]);
	return 0;
}
