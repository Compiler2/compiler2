#define NUM_ITER 1348008

#include <header.h>

int main_bench()
{
         int a,b,c,d;
		 my_scanf("%d%d%d",&a,&b,&c);
		 if(a%4==0&&a%100!=0||a%400==0)
		 {   switch(b)
		 {   case 1:
		 {d=c;
		 break;}
			 case 2:
				 {d=31+c;
				 break;}
			 case 3:
				 {d=31+29+c;
				 break;}
			 case 4:
				 {d=31+29+31+c;
				 break;}
			 case 5:
				 {d=31+29+31+30+c;
				 break;}
			 case 6:
				 {d=31+29+31+30+31+c;
				 break;}
			 case 7:
				 {d=31+29+31+30+31+30+c;
				 break;}
			 case 8:
				 {d=31+29+31+30+31+30+31+c;
				 break;}
             case 9:
				 {d=31+29+31+30+31+30+31+31+c;
				 break;}
			case 10:
				{d=31+29+31+30+31+30+31+31+30+c;
				break;}
			case 11:
				{d=31+29+31+30+31+30+31+31+30+31+c;
				break;}
			case 12:
				{d=31+29+31+30+31+30+31+31+30+31+30+c;
				break;}
		 }
         my_printf("%d",d);
		 }
		 else
		 { switch(b)
		 {   case 1:
		 {d=c;
		 break;}
			 case 2:
				 {d=31+c;
				 break;}
			 case 3:
				 {d=31+28+c;
				 break;}
			 case 4:
				 {d=31+28+31+c;
				 break;}
			 case 5:
				 {d=31+28+31+30+c;
				 break;}
			 case 6:
				 {d=31+28+31+30+31+c;
				 break;}
			 case 7:
				 {d=31+28+31+30+31+30+c;
				 break;}
			 case 8:
				 {d=31+28+31+30+31+30+31+c;
				 break;}
             case 9:
				 {d=31+28+31+30+31+30+31+31+c;
				 break;}
			case 10:
				{d=31+28+31+30+31+30+31+31+30+c;
				break;}
			case 11:
				{d=31+28+31+30+31+30+31+31+30+31+c;
				break;}
			case 12:
				{d=31+28+31+30+31+30+31+31+30+31+30+c;
				break;}
		 }
             my_printf("%d",d);
		 }
return 0;
}