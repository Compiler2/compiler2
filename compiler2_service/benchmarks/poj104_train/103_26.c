#define NUM_ITER 1181431

#include <header.h>

main_bench()
{
       char a[1000];
       int n,i,j,count;
       gets(a);
       n=strlen(a);
       for(i=0;i<n;i++)
       {
         if(a[i]<='z'&&a[i]>='a')
           a[i]=a[i]-'a'+'A';
           }
           i=0;
           for(;i<n;)
         {
           count=1;
           for(j=i+1;;j++)
           if(a[j]==a[i])
           count++;
           else
           {
               my_printf("(%c,%d)",a[i],count);
           i=j;
           break;
           }
           }
           getchar();
           getchar();
}
                           