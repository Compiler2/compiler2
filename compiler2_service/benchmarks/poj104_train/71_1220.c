#define NUM_ITER 4571

#include <header.h>

int rn(int y);
int main_bench()
{
  int n, i;
   my_scanf("%d", &n);
   for(i=0;i<n;i++){
	int  y=0, m1, m2, a, b, d=0;
	my_scanf ("%d %d %d", &y, &m1, &m2);
         if(m1>m2) {a=m2;m2=m1;m1=a;}
         if(rn(y)==1) {for(b=m1;b<m2;b++)
              {
			   if(b==1||b==3||b==5||b==7||b==8||b==10){d+=31;}
               if(b==2){d+=29;}
               if(b==4||b==6||b==9||b==11){d+=30;}
              }
		 }
         if (rn(y)==0) {for(b=m1;b<m2;b++)
              {
			   if(b==1||b==3||b==5||b==7||b==8||b==10){d+=31;}
               if(b==2){d+=28;}
               if(b==4||b==6||b==9||b==11){d+=30;}
		 }
               }
         if(d%7==0){ my_printf("YES\n"); }
         else {my_printf("NO\n");} 
                    }       

	
	return 0;
}
	int rn (int y)
	{
		if(y%4==0&&y%100!=0){return 1;}
		if(y%400==0){return 1;}
		else return 0;
	}
