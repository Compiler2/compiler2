#define NUM_ITER 28435

#include <header.h>

int main_bench()
{
   int n,sz[1000][2],i,j;
   double x,y;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
   for(j=0;j<2;j++){
   my_scanf("%d",&sz[i][j]);}}
   x=1.0*sz[0][1]/sz[0][0];
   for(i=1;i<n;i++){
   for(j=0;j<2;j++){
   y=1.0*sz[i][1]/sz[i][0];}
   if(y-x>0.05){my_printf("better\n");}
   else if(x-y>0.05){my_printf("worse\n");}
   else{my_printf("same\n");}}
   return 0;
}
   
   