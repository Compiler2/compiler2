#define NUM_ITER 40

#include <header.h>

int main_bench()
{int n,k,l=0,i[100000],j[100000],a[10000],b=0;
 my_scanf("%d",&n);
 for( k=0;k<=100000;k++)
 {
   my_scanf("%d %d",&i[k],&j[k]);
   if((i[k]==0)&&(j[k]==0))
   {
    {break;}
    }
 }

for(int m=0;m<=n-1;m++)
 {
  for(int w=0;w<=k-1;w++)
   {
    if(j[w]==m){b++;}
    if(i[w]==m) {b=0;{break;}}
   }
   if(b==n-1) 
   {b=0;l++;my_printf("%d\n",m);}
 }

 if(l==0){my_printf("NOT FOUND");}
 int v;my_scanf("%d",&v);
 return 0;

 
}
