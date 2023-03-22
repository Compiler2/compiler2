#define NUM_ITER 1620380

#include <header.h>

int main_bench()
{
  int num;
  my_scanf("%d",&num);
 if(num>9999&&num<100000)
 {int ten_thousand,thousand,hundred,ten,a;
	 ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
my_printf("%d%d%d%d%d\n",a,ten,hundred,thousand,ten_thousand);
 }
else
 if (num>999&&num<10000)
 {int ten_thousand,thousand,hundred,ten,a;
	 ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
my_printf("%d%d%d%d\n",a,ten,hundred,thousand);
 }
else
 if (num>99&&num<1000)
 {int ten_thousand,thousand,hundred,ten,a;
	ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
my_printf("%d%d%d\n",a,ten,hundred);
 }
else
 if (num>9&&num<100)
 {int ten_thousand,thousand,hundred,ten,a;
	 ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
my_printf("%d%d\n",a,ten);
 }
else
 if (num>0&&num<10)
 {int ten_thousand,thousand,hundred,ten,a;
	 	 ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
my_printf("%d\n",a);
 }
return 0;
}