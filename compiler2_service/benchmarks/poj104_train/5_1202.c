#define NUM_ITER 930582

#include <header.h>

int main_bench()
{
  char a[501];
  char b[501];
  int x,y;
  int i,s=0,q=0;
  double n,t;
  my_scanf ("%lf",&n);
  my_scanf ("%s",&a);
  my_scanf("%s",&b);
    x=strlen(a);
	y=strlen(b);
	if (x!=y){
	my_printf("error");
	}
	else {
		for (i=0;i<x;i++){
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
               my_printf ("error");
			   return 0;
	}
	if(a[i]==b[i])
		s++;
}
                t=n*x;
				if (s>t){my_printf("yes");
				}
				else my_printf ("no");
				}

	

                       return 0;



}