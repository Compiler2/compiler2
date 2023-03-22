#define NUM_ITER 13777

#include <header.h>

main_bench()
{
     int n,m,k,i,j,l;
     int s[12000];
     my_scanf("%d",&n);
     m=n;l=0;
     for (i=1;i<=n;i++)
     { 
         l++;
     my_scanf("%d",&s[l]);
                 for (j=1;j<=l-1;j++) 
                 if (s[j]==s[l])
                 {
                 l--;m--;
                 }
                 }
        for (i=1;i<=m-1;i++)
        my_printf("%d ",s[i]);
        my_printf("%d",s[m]); 

}
