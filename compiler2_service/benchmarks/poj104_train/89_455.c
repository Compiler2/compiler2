#define NUM_ITER 426

#include <header.h>

int main_bench()
{
    int n,t,i,j,k,cnt=0,cnt1=0,cnt2=0;
    my_scanf("%d",&n);
    t=10*n;
    int a[t],b[t];
    for(i=0;i<t;i++)
    {
        my_scanf("%d %d",&a[i],&b[i]);
        if((a[i]==0)&&(b[i]==0))
            break;
        else
            cnt++;
    }
    for(j=0;j<n;j++)
    {
        for(i=0,k=0;i<cnt,k<cnt;i++,k++)
        {
            if(a[i]==j)
                cnt1++;
            if(b[k]==j)
                cnt2++;
        }
        if((cnt1==0)&&(cnt2==n-1))
        {
            my_printf("%d\n",j);
            break;
        }
        cnt1=0;
        cnt2=0;        
    }
    if((cnt1==0)&&(cnt2==0))
    my_printf("NOT FOUND\n");
    getchar();
    getchar();
    getchar();
    getchar();
}