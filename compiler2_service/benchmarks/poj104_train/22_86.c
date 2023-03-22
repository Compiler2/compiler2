#define NUM_ITER 567

#include <header.h>

int main_bench()
{
 int a[300],i,j,k,l,num=0,c,d,m;
 for(m=0;m<300;m++)
  a[m]=0;
 my_scanf("%d",&a[0]);
 for(i=1;i<300;i++)
  my_scanf(",%d",&a[i]);
 for(j=0;j<300;j++)
  if(a[j]!=0||a[j+1]!=0)
   num++;
 if(num==1)
  my_printf("%s","No");
 for(k=0;k<num-1;k++)
  {
   for(l=0;l<num-1-k;l++)
    {
     if(a[l]>a[l+1])
       {
        c=a[l];
        a[l]=a[l+1];
        a[l+1]=c;
       }
    }
  }
 if(a[0]==a[num-1]&&num!=1)
  my_printf("%s","No");
 else
  {
   for(d=num-2;d>=0;d--)
    {
     if(a[d]<a[num-1])
      {
       my_printf("%d",a[d]);
       break;
      }
    }
  }
}
