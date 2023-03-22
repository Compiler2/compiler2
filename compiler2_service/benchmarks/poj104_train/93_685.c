#include <header.h>

int main_bench()
{
	int n;
	double a,b,c;
    my_scanf("%d",&n);
    a=n%3;
	b=n%5;
	c=n%7;
	if(a==0&&b==0&&c==0){
	  my_printf("3 5 7");
	}
	if(a==0&&b==0&&c!=0){
		my_printf("3 5");
	}
         if(a==0&&b!=0&&c==0){
            my_printf("3 7");
         }
         if(a!=0&&b==0&&c==0){
          my_printf("5 7");
         }
         if(a==0&&b!=0&&c!=0){
         my_printf("3");
         }
         if(a!=0&&b==0&&c!=0){
         my_printf("5");
         }
         if(a!=0&&b!=0&&c==0){
         my_printf("7");
          }
         if(a!=0&&b!=0&&c!=0){
         my_printf("n");
         }
	return 0;
	
}

