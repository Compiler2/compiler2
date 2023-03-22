#define NUM_ITER 185445

#include <header.h>




int main_bench() 
{ 
int i,j,k=0; 
int a[5][5],max[5],min[5]; 
for(i=0;i<5;i++) 
for(j=0;j<5;j++) 
my_scanf("%d",&a[i][j]); 
for(i=0;i<5;i++)max[i]=a[i][0];
for(j=0;j<5;j++)min[j]=a[0][j];
for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
        {
            if(a[i][j]>max[i])max[i]=a[i][j];
            if(a[i][j]<min[j])min[j]=a[i][j];
        }
}
for(i=0;i<5;i++)
    {
   for(j=0;j<5;j++)
      {   
            if(max[i]==min[j])
            {my_printf("%d %d %d",i+1,j+1,a[i][j]);
             k++;}
       }
    }
 if(k==0)  my_printf("not found");
}
