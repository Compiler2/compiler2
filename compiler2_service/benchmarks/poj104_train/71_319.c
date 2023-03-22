#define NUM_ITER 5852

#include <header.h>

int main_bench()
{
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,j,k,t;
	int b,c,d;
		my_scanf("%d",&n);
	for(i=1;i<=n;i++) {
		k=0;
			 my_scanf("%d%d%d",&b,&c,&d);
			 if(c>d) {
                 j=c;
				 c=d;
				 d=j;
			 }
			 
			 for(j=c;j<d;j++) {
				 k=k+days[j];
				 if((j==2)&&(((b%4==0)&&(b%100!=0))||(b%400==0))) {
					 k++;
				 }
			 }
			 if(k%7==0) {
				 my_printf("YES\n");
			 }
			 else my_printf("NO\n");
			 }
	return 0;
}
