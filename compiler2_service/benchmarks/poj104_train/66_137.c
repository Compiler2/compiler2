#define NUM_ITER 12559

#include <header.h>

int main_bench()
{
	long a,b,c,m,n,t,w;
         int i=0;
	my_scanf("%ld %ld %ld",&a,&b,&c);
         if(a%400!=0)
       {
         	m=a/400*400+1;
	for(;m<a;m++)
         {
           if(!((m%4==0&&m%100!=0)||m%400==0))
           continue;
           i=i+1;
         }
        }
         else
         m=a-399;
         for(;m<a;m++)
         {
           if(!((m%4==0&&m%100!=0)||m%400==0))
           continue;
           i=i+1;
         }

         if(a%400!=0)
         	n=365*(a-a/400*400-1)+i;
         else
         n=365*399+i;	
         switch(b)
	{
	case 1:t=c;break;
	case 2:t=c+31;break;
	case 3:t=c+31+28;break;
	case 4:t=c+31+28+31;break;
	case 5:t=c+31+28+31+30;break;
	case 6:t=c+31+28+31+30+31;break;
	case 7:t=c+31+28+31+30+31+30;break;
         case 8:t=c+31+28+31+30+31+30+31;break;
         case 9:t=c+31+28+31+30+31+30+31+31;break;
         case 10:t=c+31+28+31+30+31+30+31+31+30;break;
	case 11:t=c+31+28+31+30+31+30+31+31+30+31;break;
	case 12:t=c+31+28+31+30+31+30+31+31+30+31+30;
	}
         if(((a%4==0&&a%100!=0)||a%400==0)&&(b>=3))
         t=t+1;
	w=(n+t)%7;
         switch(w)
	{
	case 0:my_printf("Sun.\n");break;
	case 1:my_printf("Mon.\n");break;
	case 2:my_printf("Tue.\n");break;
	case 3:my_printf("Wed.\n");break;
	case 4:my_printf("Thu.\n");break;
	case 5:my_printf("Fri.\n");break;
	case 6:my_printf("Sat.\n");break;
         default:my_printf("error\n");
	}
	return 0;
}