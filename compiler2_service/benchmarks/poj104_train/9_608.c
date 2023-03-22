#include <header.h>

int main_bench()
{
    int n,m=0,t;
    my_scanf("%d",&n);
    char a[n][100],s[n][100],r[100];
    int b[n],c[n];
    for(int i=0;i<n;i++)
    my_scanf("%s %d",a[i],&b[i]);
    for(int j=0;j<n;j++)
    {
            if(b[j]>=60)
            {
                        c[m]=b[j],strcpy(s[m],a[j]);
                        if(m!=0)
                        {
                        for(int k=m;k>0;k=k-1)
                        {
                                if(c[k]>c[k-1])
                                {
                                             strcpy(r,s[k]),strcpy(s[k],s[k-1]),strcpy(s[k-1],r);
                                             t=c[k],c[k]=c[k-1],c[k-1]=t;
                                }
                        }
                        }
                        m++;
            }
    }
    if(m!=0)
    {
    for(int i=0;i<m;i++)
    my_printf("%s\n",s[i]);
    }
    for(int j=0;j<n;j++)
    {
            if(b[j]<60)
            my_printf("%s\n",a[j]);
    }
    getchar();
    getchar();
}
