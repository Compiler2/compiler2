#define NUM_ITER 17876

#include <header.h>

main_bench()
 {int a,b,c,i,n,d[10000];
 my_scanf("%d",&n);
 c=2;
 if(n<=4)
 my_printf("empty");
 else
 {a=3;
 do{i=2;
   do {b=a%i;
   if(b>0)
     i=i+1;
   else
   {
		if(i==a)
		{d[c]=a;
		c=c+1;
		if(d[c-1]-d[c-2]==2)
		my_printf("%d %d\n",d[c-2],d[c-1]);
		break;}
		else
		break;}
   } while(i<=a);
   a=a+1;
}while(a<=n);}}