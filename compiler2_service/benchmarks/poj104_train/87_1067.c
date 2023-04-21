#define NUM_ITER 11581

#include <header.h>

int main_bench()
{
int a,b,c,d,e,f,i;
int sum;
int n=100;
for(i=0;i<n;i++){
my_scanf("%d",&a);
my_scanf("%d",&b);
my_scanf("%d",&c);
my_scanf("%d",&d);
my_scanf("%d",&e);
my_scanf("%d",&f);
if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){

sum=(d+11-a)*3600+(59+e-b)*60+(60+f-c);
my_printf("%d\n",sum);
}
else if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){break;
}

}

return 0;
}
