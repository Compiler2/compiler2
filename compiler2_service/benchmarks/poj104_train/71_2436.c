#define NUM_ITER 15369

#include <header.h>


int main_bench()
{ int days[13] = {0, 31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31 };
   int y, m1,m2, d, i,j, n,t;
   my_scanf("%d",&n);
   for(i=1;i<=n;i++){d=0;days[2]=28;
	   my_scanf("%d%d%d", &y, &m1, &m2);

       if ((y % 4 == 0 && y % 100 !=0) || (y % 400 == 0))
        days[2]++;
	   if(m1>12||m1<1||m2>12||m2<1)my_printf("NO");
	   else if(m1>m2){t=m1;m1=m2;m2=t;}
	   for(j=m1;j<m2;j++){
		   d=d+days[j];
	   }
	   if(d%7==0)my_printf("YES\n");
	   else my_printf("NO\n");
   }

	
	return 0;
}