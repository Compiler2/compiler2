#define NUM_ITER 1548

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,j,p;
    for(j=0;j<1000;j++){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==b&&b==c&&c==d&&d==e&&e==f&&f==0){
			return 0;}
		else{p=0;
    p=3600*(12-a-1+d)+60*(60-b-1+e)+60-c+f;
		my_printf("%d\n",p);}
	}
return 0;
}