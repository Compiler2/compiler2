#define NUM_ITER 905070

#include <header.h>


int main_bench(){
    int i,x,y,s,g=0;
	double rate,t;
	char a[510],b[510];
	s=0;

	my_scanf("%lf%s%s",&rate,a,b);
	x=strlen(a);
	y=strlen(b);
    if(x!=y){
	     my_printf("error");
	}
	else{
        for(i=0;i<x;i++){
			if(((a[i]!='A')&&(a[i]!='C')&&(a[i]!='G')&&(a[i]!='T'))||((b[i]!='A')&&(b[i]!='C')&&(b[i]!='G')&&(b[i]!='T'))){
			   
			   g=1;
			}
			else if(a[i]==b[i]){
			   s++;
			}
		}
    t=rate*x;
	if(g==0){
		if(s>t){
	      my_printf("yes");
	   }
	   else{
	      my_printf("no");
	   }
	}
	else{my_printf("error");}
	   
	}

return 0;
}
