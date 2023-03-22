#define NUM_ITER 823313

#include <header.h>

int main_bench()
{
    char a[501],b[501];
	int i,j=0;
	double x,y,z;
	my_scanf("%lf",&x);
    my_scanf("%s",a);
    my_scanf("%s",b);
	y=strlen(b);
	for(i=0;a[i]!='\0';i++)
	{
	     if(strlen(a)!=strlen(b))
		 {
		      my_printf("error");
			  break;
		 }
         if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		 {
			 my_printf("error");
			 break;
		 }
		 if(a[i]==b[i])
		 {
			 j++;
		 }
		 if(a[i+1]=='\0')
		 {
			 z=j/y;
             if(z>x){my_printf("yes");}else{my_printf("no");}
		 }
	}
    return 0;
}
