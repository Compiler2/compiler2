#define NUM_ITER 19489

#include <header.h>

struct student
{
  int ID;
  int chi;
  int math;     
}student[100000];
int main_bench()
{
   int n,i,j,k;
   my_scanf("%d",&n);
      int a[n];
   for(i=0;i<n;i++)
     {
     my_scanf("%d %d %d",&student[i].ID,&student[i].chi,&student[i].math);      
      a[i]=student[i].chi+student[i].math;
      }

  for(k=0;k<3;k++)
  {
   for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          if(a[i]<a[j])
             break;          
       } 
       if(j==n&&a[i]>=a[j-1]) 
         {
           my_printf("%d %d\n",student[i].ID,a[i]);
           a[i]=0;
           break;
         }      
    }  
  } 
   getchar();
   getchar();   
}
