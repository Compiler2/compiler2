#define NUM_ITER 148679

#include <header.h>

int main_bench()
{
    char a[100],s;
    int i,j,k,l,m,n,t,b[100],c[100];
    for (;;)
    {
        gets(a);
        if(a[0]=='\n')
        break;
        n=strlen(a);
        for(i=0,j=0,k=0;i<n;i++)
        {
            if(a[i]=='(')
            {
                b[j]=i;
                j++;
            }
            else if(a[i]==')')
            {
                c[k]=i;
                k++;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            for (l=j-1;l>=0;l--)
            {
                if (b[l]==i)
                {
                    for (t=0;t<k;t++)
                    {
                        if (c[t]>i)
                        {
                            b[l]=-1;
                            c[t]=-1;
                            break;
                        }
                    }
                    break;
                }
            }
        }
        my_printf("%s\n",a);
        for(i=0;i<n;i++)
        {
            for (l=0;l<j;l++)
            {
                if(b[l]==i)
                {
                    my_printf("$");
                    break;
                }
            }
            if(l!=j)
            continue;
            for (t=0;t<k;t++)
            {
                if(c[t]==i)
                {
                    my_printf("?");
                    break;
                }
            }
            if(t!=k)
            continue;
            my_printf(" ");
        }

     my_printf("\n");
     a[0]='\n';
    }
}