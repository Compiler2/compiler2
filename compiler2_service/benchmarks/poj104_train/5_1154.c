#define NUM_ITER 894857

#include <header.h>

int main_bench(){
    int pd=1,i=0;
	double x,xg=0,c,f;
	char m[501],z[501];
	my_scanf("%lf%s%s",&x,&m,&z);
	c=strlen(m);f=strlen(z);
	if(c!=f){pd=0;}
		for(i=0;i<c;i++){
			if((m[i]!='A'&&m[i]!='G'&&m[i]!='C'&&m[i]!='T')||(z[i]!='A'&&z[i]!='G'&&z[i]!='C'&&z[i]!='T'))pd=0;
			if(m[i]==z[i])xg++;
		}
		if(pd==0)my_printf("error");
        else if((xg/c)>=x)my_printf("yes");
		else my_printf("no");
	return 0;
}
