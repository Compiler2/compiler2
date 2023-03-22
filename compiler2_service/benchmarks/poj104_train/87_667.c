#define NUM_ITER 15298

#include <header.h>

int main_bench(){
	int i;
int a,b,c,d,e,f,m,s;
for(i=0;i<100;i++){	
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(!(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)){
m=(12-a)*60*60;
s=b*60+c;
m=m-s;
m=m+d*60*60+e*60+f;
my_printf("%d\n",m);
}else{
break;
}
}
return 0;
}