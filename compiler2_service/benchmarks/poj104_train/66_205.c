#define NUM_ITER 1009441

#include <header.h>


int main_bench()
{
	int a,b,c,k,t,l,s;
	my_scanf ("%d%d%d",&a,&b,&c);
    l=(a-1)/4+(a-1)/400-(a-1)/100;
	t=l*2+(a-l-1);
if ((a%4==0&&a%100!=0)||(a%400==0))
    {
		switch (b)
		{
			   case 1:
				  {
					  k=0;
					  break;
				  }
		      case 2:
				  {
					  k=31;
					  break;
				  }
			  case 3:
				  {
					  k=60;
					  break;
				  }
			  case 4:
				  {
					  k=91;
					  break;
				  }
			  case 5:
				  {
					  k=121;
					  break;
				  }
			   case 6:
				  {
					  k=152;
					  break;
				  }
			   case 7:
				  {
					  k=182;
					  break;
				  }
                case 8:
				  {
					  k=213;
					  break;
				  }
                case 9:
				  {
					  k=244;
					  break;
				  }
                case 10:
				  {
					  k=274;
					  break;
				  }
                 case 11:
				  {
					  k=305;
					  break;
				  }
                 case 12:
				  {
					  k=335;
					  break;
				  }
                
		}
	}
	else
    {
		switch (b)
		{
			   case 1:
				  {
					  k=0;
					  break;
				  }
		      case 2:
				  {
					  k=31;
					  break;
				  }
			  case 3:
				  {
					  k=59;
					  break;
				  }
			  case 4:
				  {
					  k=90;
					  break;
				  }
			  case 5:
				  {
					  k=120;
					  break;
				  }
			   case 6:
				  {
					  k=151;
					  break;
				  }
			   case 7:
				  {
					  k=181;
					  break;
				  }
                case 8:
				  {
					  k=212;
					  break;
				  }
                case 9:
				  {
					  k=243;
					  break;
				  }
                case 10:
				  {
					  k=273;
					  break;
				  }
                 case 11:
				  {
					  k=304;
					  break;
				  }
                 case 12:
				  {
					  k=334;
					  break;
				  }
                
		}
	}
	t=t+k+c;
    s=t%7;

	if (s==0)
		my_printf("Sun.\n");
if (s==1)
		my_printf("Mon.\n");
if (s==2)
		my_printf("Tue.\n");
if (s==3)
		my_printf("Wed.\n");
if (s==4)
		my_printf("Thu.\n");
if (s==5)
		my_printf("Fri.\n");
if (s==6)
		my_printf("Sat.\n");

	return 0;
}