#define NUM_ITER 1037719

#include <header.h>

int main_bench()
{
     int n;
	 char a[100];
     int b[100]={0},i,m,r;
	 gets(a);
     n=strlen(a);
     for(i=0;i<n;i++)
     {
         b[i]=a[i]-'0';
	 }
	 m=b[0]*10+b[1];
	 r=m%13;
	 if(n==1) my_printf("%d\n%d",0,b[0]);
	 else if(n==2) my_printf("%d\n%d",m/13,r);
	 else{ if(m/13!=0) my_printf("%d",m/13);
	 for(i=2;i<n;i++)
	  {
	     m=r*10+b[i];
	     r=m%13;
         my_printf("%d",m/13);
	  
	  }
	  
	  my_printf("\n");
	  my_printf("%d",r);}
	  return 0;
}