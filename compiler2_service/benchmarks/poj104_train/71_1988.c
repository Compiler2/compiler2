#define NUM_ITER 5905

#include <header.h>

int main_bench()
{
int n,year,m1,m2,x=0,i,m,a,b;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
   my_scanf("%d %d %d",&year,&m1,&m2);
       if(m1<m2)
	   {
		   a=m1;
		   b=m2;
	   }
	   else
	   {a=m2;
	   b=m1;
	   }

   if((year%4==0 && year%100!=0)||(year%400==0))
   {
	  
    for(m=a;m<b;m++)
    {
    switch(m)
    {
     case 1:x +=31;break;
     case 3:x +=31;break;
     case 5:x +=31;break;
     case 7:x +=31;break;
     case 8:x +=31;break;
     case 10:x +=31;break;
     case 12:x +=31;break;    
     case 2:x +=29;break;
     default :x +=30;
    }
   
    }
   
    if(x%7==0){
     my_printf("YES\n");
    }
    else
		my_printf("NO\n");x=0;}
    else
   {
    for(m=a;m<b;m++)
    {
    switch(m)
    {
     case 1:x +=31;break;
     case 3:x +=31;break;
     case 5:x +=31;break;
     case 7:x +=31;break;
     case 8:x +=31;break;
     case 10:x +=31;break;
     case 12:x +=31;
      break;
     case 2:x +=28;
      break;
     default :x +=30;
    }
    
    }
 if(x%7==0){
     my_printf("YES\n");
    }
 else{
     my_printf("NO\n");
	x=0;
   }
	}
}
return 0;
}
 