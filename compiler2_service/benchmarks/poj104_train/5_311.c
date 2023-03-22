#define NUM_ITER 941583

#include <header.h>

int main_bench(){
double n,m,d;
int a,b,i,c;
char u[500],v[500];
my_scanf("%lf",&n);
my_scanf("%s",u);my_scanf("%s",v);
a=strlen(u);
b=strlen(v);
if(a!=b){my_printf("error");}
else if(a==b) {
	c=0;
	for(i=0;u[i]!='\0';i++){
	if(u[i]!='A'&&u[i]!='T'&&u[i]!='G'&&u[i]!='C'&&v[i]!='A'&&v[i]!='T'&&v[i]!='G'&&v[i]!='C')
	{
		my_printf("error");
		c=1;break;

	}
	}
    if(c==0)
	
	{
		d=0;
		for(i=0;u[i]!='\0';i++){
		if(u[i]==v[i])d++;
		}
		m=d/(1.0*(a-1));
		if(m>n){my_printf("yes");}
		else {my_printf("no");}

	
	
	}

}


return 0;
}
