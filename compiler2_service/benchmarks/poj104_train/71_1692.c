#define NUM_ITER 6486

#include <header.h>

int main_bench()
{
      int n,year,m1,m2,i,j,b,day;
      my_scanf("%d",&n);
      int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
      for(i=0;i<n;i++)
      {
          my_scanf("%d %d %d",&year,&m1,&m2);
          if (m1>m2)                                        
          {
              b=m1;
              m1=m2;
              m2=b;
          }
          day=0;
          if ((year%4==0)&&(year%100!=0)||(year%400==0))    
          {
              days[1]++;
              for(j=m1-1;j<m2-1;j++) day=day+days[j];
              if (day%7==0) my_printf("YES\n");
              else my_printf("NO\n");
              days[1]=28;
          }
          else
          {
              for(j=m1-1;j<m2-1;j++) day=day+days[j];
              if (day%7==0) my_printf("YES\n");
              else my_printf("NO\n");
          }
      }

}
