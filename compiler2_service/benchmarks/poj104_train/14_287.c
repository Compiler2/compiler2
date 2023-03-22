#define NUM_ITER 22919

#include <header.h>

int main_bench()
{
 int n,i,max1=0,max2=0,max3=0,t1=0,t2=0,t3=0;
 int ID[100000],y[100000],m[100000],s[100000];
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
  my_scanf("%d %d %d",&ID[i],&y[i],&m[i]);
 for(i=0;i<n;i++)
  s[i]=y[i]+m[i]; 
 for(i=0;i<n;i++)
 {
  if(max1<s[i])
  {
   max1=s[i];
   t1=i;             
  }                
 }
 s[t1]=0;      
 for(i=0;i<n;i++)
 {
  if(max2<s[i])
  {
   max2=s[i];
   t2=i;             
  }                
 }
 s[t2]=0;
 for(i=0;i<n;i++)
 {
  if(max3<s[i])
  {
   max3=s[i];
   t3=i;             
  }                
 }           
 my_printf("%d %d\n",ID[t1],max1); 
 my_printf("%d %d\n",ID[t2],max2);
 my_printf("%d %d\n",ID[t3],max3);
 getchar();
 getchar();
 getchar();
 return 0;
}
