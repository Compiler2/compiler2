#define NUM_ITER 1223979

#include <header.h>

int main_bench()
{
    char a[500];
    int l,i,j,m,p,n,k;
    my_scanf("%s",a);
    l=strlen(a);
    for(i=2;i<=l;i++)
    {
       for(j=0;j<=l-i;j++)
       {
          p=1;
          m=j;
          n=m+i-1;
          while(m>=0)
          {
            if(a[m]!=a[n])
            {
               p=0;
               break;
               }
               if(m==n||n-m==1)
               break;
               m++;
               n--;
               }
         if(p==1)
         {
                 for(k=j;k<=j+i-1;k++)
                 my_printf("%c",a[k]);
                 my_printf("\n");
                 }
        }
        }
        getchar();
        getchar();
}