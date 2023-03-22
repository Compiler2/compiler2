#define NUM_ITER 1000361

#include <header.h>

int main_bench()
{   
   int n,a,B,C,D,E,F,G,H,I,J,K,L;
   my_scanf("%d",&n);
   a=(13+n-1)%7;
   if(a==5)
	   my_printf("1\n");
   B=(31+13+n-1)%7;	
   if(B==5)
	   my_printf("2\n");
   C=(31+28+13+n-1)%7;
   if(C==5)
	   my_printf("3\n");
   D=(31+28+31+13+n-1)%7;
   if(D==5)
	   my_printf("4\n");
   E=(31+28+31+30+13+n-1)%7;
   if(E==5)
	   my_printf("5\n");
   F=(31+28+31+30+31+13+n-1)%7;
   if(F==5)
	   my_printf("6\n");
   G=(31+28+31+30+31+30+13+n-1)%7;
   if(G==5)
	   my_printf("7\n");
   H=(31+28+31+30+31+30+31+13+n-1)%7;
   if(H==5)
	   my_printf("8\n");
   I=(31+28+31+30+31+30+31+31+13+n-1)%7;
   if(I==5)
	   my_printf("9\n");
   J=(31+28+31+30+31+30+31+31+30+13+n-1)%7;
   if(J==5)
	   my_printf("10\n");
   K=(31+28+31+30+31+30+31+31+30+31+13+n-1)%7;
   if(K==5)
	   my_printf("11\n");
   L=(31+28+31+30+31+30+31+31+30+31+30+13+n-1)%7;
   if(L==5)
	   my_printf("12\n");
   return 0;
}
