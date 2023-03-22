#include <header.h>

int main_bench()
{
    float a[100]={0};
    float b[100]={0};
    float c[100]={0};
    float d=0;
    int i,n;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%f %f",&a[i],&b[i]);
        if(i==0)
        {
            c[i]=b[i]/a[i];
            d=c[i];
        }

    }
    for(i=1;i<n;i++)
        {
            c[i]=(float)(b[i]/a[i]);
            if((c[i]-d)>0.05)
            {
                my_printf("better\n");
            }
            else if((c[i]-d)<-0.05)
            {
                my_printf("worse\n");
            }
            else
            my_printf("same\n");
        }
    return 0;
}
