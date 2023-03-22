#define NUM_ITER 27289

#include <header.h>

int main_bench(){
	int a,i,n,c,d,e;
	char b[100];
	my_scanf("%d",&a);
	for(i=0;i<a;i++){
		my_scanf("%s",&b);
		d=strlen(b);
		if((b[0]<=90&&b[0]>=65)||b[0]==95||(b[0]>=97&&b[0]<=122))
			e=1;
		else{
			e=0;
			
		}
		for(n=0;n<d;n++){
			if(b[n]<=90&&b[n]>=65)	c=1;
			else if(b[n]==95) c=1;
			else if(b[n]>=97&&b[n]<=122)c=1;
			else if(b[n]<=57&&b[n]>=48)c=1;
			else {c=0;break;}
			
			
		}
		if(c==1&&e==1)
			my_printf("yes\n");
		else
			my_printf("no\n");
	}
	return 0;
}