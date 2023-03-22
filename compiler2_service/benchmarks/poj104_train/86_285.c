#include <header.h>

int main_bench(){
int n,i,j,t,num,b[100],c[100][61]={0};
   my_scanf("%d",&n);
   for (i=0;i<n;i++)
   {
       my_scanf("%d",&b[i]);
       for (j=0;j<b[i];j++)
       {
        my_scanf("%d",&t);
        c[i][t-1]=1;
       } 
    }
   for (i=0;i<n;i++)
   {
   j=0;num=0;
   while (j<60)
   {
   j++;
   num ++;
   if (c[i][num]==1) 
   {
   j+=3;
   if (j>=60) num+=1;
   }
   }
  my_printf("%d\n",num);
 }
 return 0;
}