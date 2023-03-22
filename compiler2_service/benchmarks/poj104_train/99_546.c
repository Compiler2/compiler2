#include <header.h>

int main_bench()
{int n,i,s[100],a1=0,b1=0,c1=0,d1=0;
 double a,b,c,d;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {	my_scanf("%d",&s[i]);
    if(s[i]<19) a1++;
	if(s[i]>18&&s[i]<36) b1++;
	if(s[i]>35&&s[i]<61) c1++;
	if(s[i]>60) d1++;
 }
 a=(double)a1/(double)n*100;
 b=(double)b1/(double)n*100;
 c=(double)c1/(double)n*100;
 d=(double)d1/(double)n*100;
 my_printf("1-18: %.2lf",a);my_printf("%%\n");
 my_printf("19-35: %.2lf",b);my_printf("%%\n");
 my_printf("36-60: %.2lf",c);my_printf("%%\n");
 my_printf("60??: %.2lf",d);my_printf("%%\n");
}