#define NUM_ITER 19613

#include <header.h>

int main_bench()
{
    int n,c,i,j,k=0,temp,m=0;
    int a[2000],b[2000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {my_scanf("%d",&a[i]);}
     for(m=0;m<n;m++)
  {   if(a[m]%2==0)
     continue;
  else
 {
  b[k]=a[m];
  k++;
}
}
   for(j=k-1;j>=1;j--)
   {
                    for(c=0;c<j;c++)
                    if(b[c]>b[c+1])
                   { temp=b[c+1];
                   b[c+1]=b[c];
                    b[c]=temp;}
                    }            
               my_printf("%d",b[0]);
                              for(i=1;i<k;i++)
                                {       my_printf(",%d",b[i])  ;}
                return 0;
      }