#define NUM_ITER 201532

#include <header.h>

int main_bench()
{
    int n;
    int i,j,k;
    int length;
    my_scanf("%d",&n);
    int p,temp;
    char a[10005];
    int b[10005]={0};
    my_scanf("%s",a);
    length=strlen(a);
    for(i=0;i<length-n+1;i++)
    {
       if(b[i]!=-1)
       {
           for(j=i+1;j<length-n+1;j++)
          {
             p=0;
             for(k=0;k<n;k++)
             {
                 if(a[i+k]!=a[j+k])
                 {
                     p=1;
                     break;
                 }
             }
            if(p==0)
            {
               b[i]++;
               b[j]=-1;
              
            }
           }
       }
    }
    temp=0;
    for(i=0;i<length;i++)
    {
        if(b[i]>temp)
        {
          temp=b[i];
        }
    }
    
    if(temp==0)
    {
        my_printf("NO");
    }
    else
    {
        my_printf("%d\n",temp+1);
    for(i=0;i<length;i++)
    {
        if(b[i]==temp)
        {
          for(k=0;k<n;k++)
          {
              my_printf("%c",a[i+k]);
          }
          my_printf("\n");
        }
    }
    }
    return 0;

}
