#define NUM_ITER 10592

#include <header.h>

int main_bench()
{
    int n,i,j,k,m,t,b[100],e[100];
    char a[100][20],c[100][20],d[100][20],str[20];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
        my_scanf("%s %d",a[i],&b[i]);
    for(i=0,j=0,k=0;i<n;i++)
    {
        if(b[i]>=60)
        {
            strcpy(c[j],a[i]);
            e[j]=b[i];
            j++;
        }
        else
        {
            strcpy(d[k],a[i]);
            k++;              
        }
    }
    for(i=0;i<j-1;i++)
    {
        for(m=0;m<j-1-i;m++)
        {
            if(e[m]<e[m+1])
            {
                t=e[m];e[m]=e[m+1];e[m+1]=t;
                strcpy(str,c[m]);strcpy(c[m],c[m+1]);strcpy(c[m+1],str);
            }
        }
    }
    for(i=0;i<j;i++)
    my_printf("%s\n",c[i]);
    for(i=0;i<k;i++)
    my_printf("%s\n",d[i]);
    getchar();
    getchar();
}