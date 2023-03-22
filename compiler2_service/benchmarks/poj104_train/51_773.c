#define NUM_ITER 894663

#include <header.h>

int main_bench()
{
    char s[500],a[500][500],b[500][500];
    int c[500]={0},i,j,k,t,max,count=1,x=1;
    my_scanf("%d",&t);
    my_scanf("%s",s);
    k=strlen(s);
    for(i=0;i<k-t+1;i++)
    {
        int m=0;
        for(j=i;j<i+t;j++)
        {
            a[i][m]=s[j];
            m++;
        }
    }
    for(i=0;i<k-t+1;i++)
    {
        for(j=0;j<k-t+1;j++)
        {
            if(strcmp(a[i],a[j])==0)
            c[i]++;
            else;
        }
    }
    max=c[0];
    for(i=0;i<k-t+1;i++)
    {
        if(c[i]>max)
        max=c[i];
    }
    if(max==1)
    my_printf("NO\n");
    else
    {
        my_printf("%d\n",max);
        for(i=0;i<k-t+1;i++)
        {
          if(c[i]==max)
          {
            strcpy(b[0],a[i]);
            break;
          }
        }
        for(i=0;i<k-t+1;i++)
        {
           int count2=0;
           if(c[i]==max)
           {
              for(j=0;j<count;j++)
             {
                 if(strcmp(b[j],a[i])==0)
                 break;
                 else
                 count2++;
              }
               if(count2==count)
               {
                   strcpy(b[x],a[i]);
                   x++;
                   count++;
                }
                else;
           }
            else;
         }
         for(i=0;i<count;i++)
         my_printf("%s\n",b[i]);
    }
    return 0;
}
