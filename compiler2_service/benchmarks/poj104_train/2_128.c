#define NUM_ITER 3890

#include <header.h>


int main_bench()
{
    int maxc=0,i,j,n,a[1000],c;
    char maxp,b[1000][27],p;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d%s",&a[i],b[i]);
    }
    for (p='A';p<='Z';p++)
    {
        c=0;
         for(i=0;i<n;i++)
         {
            for(j=0;;j++)
            {
                if(b[i][j]=='\0') break;
                if(b[i][j]==p)
                {
                    c++;
                }

            }
         }
        if(c>maxc)
        {
            maxc=c;
            maxp=p;
        }
    }
    my_printf("%c\n",maxp);
    my_printf("%d\n",maxc);




      for(i=0;i<n;i++)
         {
            for(j=0;;j++)
            {
                if(b[i][j]=='\0') break;
                if(b[i][j]==maxp)
                {
                    my_printf("%d\n",a[i]);
                }

            }
         }





    
    return 0;
}
