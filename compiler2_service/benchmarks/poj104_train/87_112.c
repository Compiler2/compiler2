#define NUM_ITER 1091542

#include <header.h>

int main_bench(){
int a,b,c,d,e,f,s,m,n,r,i,j,x[6];
my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
for(j=0;x[0]!=0;j++){
for(i=0;i<6;i++){
	my_scanf("%d",&x[i]);
}
s=d+12-a-1;
m=60-b-1+e;
n=60-c+f;
r=s*3600+m*60+n;
my_printf("%d\n",r);
a=x[0];b=x[1];c=x[2];d=x[3];e=x[4];f=x[5];
}
return 0;
}