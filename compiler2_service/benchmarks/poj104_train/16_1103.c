#define NUM_ITER 1917067

#include <header.h>

int main_bench()
{int n,weishu;
 int ge,shi,bai,qian;
 my_scanf("%d",&n);
 if ((0<=n)&&(n<=9)) 
   my_printf("%d\n",n); 
 if ((10<=n)&&(n<=99))
 { ge=n%10;
   shi=n/10;
   my_printf("%d%d",ge,shi);
 }
 if ((100<=n)&&(n<=999)) 
 {  ge=n%10;
    shi=((n-ge)/10)%10;
	bai=n/100;
	my_printf("%d%d%d",ge,shi,bai);
 }
  if ((1000<=n)&&(n<=9999))
  {ge=n%10;
  shi=((n-ge)/10)%10;
  bai=((n-shi*10)/100)%10;
  qian=(n-bai*100)/1000;
  my_printf("%d%d%d%d",ge,shi,bai,qian);
  }

}