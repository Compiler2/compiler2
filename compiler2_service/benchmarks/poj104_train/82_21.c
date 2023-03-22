#define NUM_ITER 25825

#include <header.h>


int main_bench()
{int a[200],b[200],i,k,j;
int n;
int temp;
int c[200]={0};
my_scanf("%d",&n);
for(i=0;i<2*n;i++)
{my_scanf("%d",&a[i]);
                  }
 for(i=0;i<n;i++){
 if(a[2*i]>=90&&a[2*i]<=140&&a[2*i+1]>=60&&a[2*i+1]<=90)
 b[i]=1;
 else
 b[i]=0;                 } 
 for(k=0;k<n;k++)
 for(j=k;j<n;j++)
 {if(b[j]==1)
 c[k]=c[k]+1;
 else
 break;}
  
 for(j=0;j<n;j++)
 {if(c[j]>c[j+1])
    {temp=c[j];
    c[j]=c[j+1];
    c[j+1]=temp;}
                 }   
    my_printf("%d\n",c[n]);                        
 
  
  
 
  return 0;
}