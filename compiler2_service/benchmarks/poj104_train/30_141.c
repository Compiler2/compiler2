#define NUM_ITER 64523

#include <header.h>


int main_bench()
{
int a[100];
int n,i,sum=0;
for(i=0;i<100;i++){
a[i]=i+1;
}

my_scanf("%d",&n);
for(i=0;i<n;i++){
if(a[i]%7==0){
a[i]=0;
}
else if((a[i]-7)%10==0){
a[i]=0;
}
else if((a[i]/10)-7==0){
a[i]=0;
}
}

for(i=0;i<n;i++){
sum=sum+a[i]*a[i];
}

my_printf("%d\n",sum);
}