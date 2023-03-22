#include <header.h>

int main_bench()
{
    int a[50000],b[50000];
    int n,i,j,max,min,t,p;
    t=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
        my_scanf("%d %d",&a[i],&b[i]);

        for(i=0,min=a[0];i<n;i++)
        {
            if(a[i]<min)
                    min=a[i];
        }
        for(i=0,max=b[0];i<n;i++)
        {
            if(b[i]>max)
                    max=b[i];
        }
    p=0;
    for(j=0;j<n;j++)
    {
        if(a[j]==min&&b[j]==max)
        {
            p=n;
            break;
        }
        for(i=0,t=0;i<n;i++)
        {
            if(i==j)
                continue;
            else if(a[j]==min)
            {
                if(a[i]<=b[j]&&b[i]>=b[j])
                t=t+2;
            }
            else if(b[j]==max)
            {
                if(b[i]>=a[j]&&a[i]<=a[j])
                t=t+2;
            }
            else
            {
                if(b[i]>=b[j]&&a[i]<=a[j])
                    t=t+2;
                else if(b[i]>=b[j]&&a[i]<=b[j]&&a[i]>a[j])
                    t=t+1;
                else if(a[i]<=a[j]&&b[i]>=a[j]&&b[i]<b[j])
                    t=t+1;
            }
            if(t>=2)
            {
                p+=1;
                break;
            }
        }

    }
    if(p!=n)
        my_printf("no\n");
    else
    {
        my_printf("%d %d",min,max);
    }
    return 0;
}
