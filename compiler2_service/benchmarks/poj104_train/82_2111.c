#include <header.h>

int main_bench(){
    int n;
    int k=0;
    int c=0;
    my_scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        my_scanf("%d%d",&(a[i]),&(b[i]));
        if((a[i]>=90)&&(a[i]<=140)&&(b[i]<=90)&&b[i]>=60)
        {
            c++;
        }
        else
        {
            if(c>k)
            {
                k=c;
            }
            c=0;
        }
    }
    if(c>k)
    {
    my_printf("%d\n",c);
    }
    else
    {
        my_printf("%d\n",k);
    }
    return 0;
}
