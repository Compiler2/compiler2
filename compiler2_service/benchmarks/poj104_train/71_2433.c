#define NUM_ITER 7660

#include <header.h>

int main_bench()
{
   int n,i,t,j,k,p;
   struct point{
     int a,b,c;
     }tope[1000];
   int days[80]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      my_scanf("%d%d%d",&tope[i].a,&tope[i].b,&tope[i].c);
   }
   for(i=0;i<n;i++)
   {
      days[2]=(tope[i].a%4!=0||(tope[i].a%100==0&&tope[i].a%400!=0))?28:29;
      if(tope[i].b>tope[i].c)
      {
          k=tope[i].b;
          p=tope[i].c;
      }
     if(tope[i].b<=tope[i].c)
     {
          k=tope[i].c;
          p=tope[i].b;
      }
         t=0;
         for(j=p;j<k;j++)
         {
              t=t+days[j];
         }
         if(t%7==0)
         {
            my_printf("YES\n");
          }
         if(t%7!=0)
         {
            my_printf("NO\n");
          }
     }
      return 0;
}

 