#define NUM_ITER 35063

#include <header.h>

int main_bench()
{
  int a[200],b[200],i,j,k,n;
  j=0; k=0;
  my_scanf("%d\n",&n);
  for(i=0;i<n;i++) {my_scanf("%d %d",&a[i],&b[i]);}
  for(i=0;i<n;i++)
  {
     if(a[i]==0)
     {
       if(b[i]==1)  {j++;}
       else { if(b[i]==2)  {k++;}}
     } 
     if(a[i]==1)
     {
       if(b[i]==2)  {j++;}
       else { if(b[i]==0)  {k++;}}
     } 
     if(a[i]==2)
     {
       if(b[i]==0)  {j++;}
       else { if(b[i]==1)  {k++;}}
     } 
   }
   if(j==k) {my_printf("Tie");}
   else
   {
     if(j>k)  {my_printf("A");}
     else    {my_printf("B");} 
   }
return 0;
}

