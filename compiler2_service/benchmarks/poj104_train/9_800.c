#define NUM_ITER 3055

#include <header.h>

int main_bench()
{
    int c,d,e,f,n,i;
    char a[100][10];
    int b[100];
    my_scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        my_scanf ("%s %d",a[i],&b[i]);
    }
    for (c=0;c<n;c++)
    {       
      e=-1;
      for (i=0;i<n;i++)
      {
         if (b[i]>=60)
         {
           if (b[i]>e)
           {
             e=b[i];
             f=i;
           }
         }
      }
         if(e!=-1)
         {
           my_printf ("%s\n",a[f]);
           b[f]=0;
         }
    }
    for (i=0;i<n;i++)
    {
        if (b[i]!=0)
       {
           my_printf ("%s\n",a[i]);
       }
    }
    getchar();
    getchar();
}




