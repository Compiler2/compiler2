#define NUM_ITER 4347

#include <header.h>

int main_bench()
{
  int n,a[300]={0},j,i,sum=0,temp;
  float b,c[300]={0},min;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
        my_scanf("%d",&a[i]);
        sum+=a[i];
  }
  b=(float)sum/n;
  
  for(i=0;i<n;i++)
  {
        if(a[i]>b)
        c[i]=a[i]-b;
        else
        c[i]=b-a[i];
       
  }
  for(i=1;i<n;i++)
  {
        for(j=n-1;j>=i;j--)
        {
            if(c[j-1]>c[j])
            {
             min=c[j];
              c[j]=c[j-1];
              c[j-1]=min;
              temp=a[j];
              a[j]=a[j-1];
              a[j-1]=temp;
            }
        }
  }
  if(c[n-1]==c[n-2])
  { 
     
   
     if(a[n-2]>a[n-1])
     {
         temp=a[n-1];
         a[n-1]=a[n-2];
         a[n-2]=temp;
     }
   

     my_printf("%d,%d",a[n-2],a[n-1]);
   
    
  }
  else
  my_printf("%d",a[n-1]);
  return 0;
  
} 
