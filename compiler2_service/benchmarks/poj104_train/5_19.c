#define NUM_ITER 917748

#include <header.h>

int main_bench()
{
 double c,f=0;
 int d,e,i;
 my_scanf("%lf",&c);
 char a[100],b[100];
 my_scanf("%s%s",&a,&b);
 d=strlen(a);
 e=strlen(b);
 if(d!=e) my_printf ("error");
 else {
	 for (i=0;i<d;i++){
		 if ((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')) {
			 my_printf("error");
			 return 0;;
		 }
		 else {
			 if(a[i]==b[i]) f++;
		 }
	 }
	 if (f/e>=c) my_printf ("yes");
	 else my_printf("no");
 }
 return 0;

}

	   
       
