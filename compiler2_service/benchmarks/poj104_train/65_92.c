#define NUM_ITER 35921

#include <header.h>

int main_bench(){
int n,i,m,a,b,c=0,d=0;
double s,t;
my_scanf("%d",&n);
for (i=1;i<=n;i++){
my_scanf("%d %d",&a,&b);
if ((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))  c=c+1;
if ((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))  d=d+1;

}
if (c>d) my_printf("A");
if (c<d) my_printf("B");
if (c==d) my_printf("Tie");




return 0;
}