#define NUM_ITER 5817

#include <header.h>

int s[100];
int sl(int i,int n);
int main_bench()
{
int i;
int n;
int s[100];
int a[100];
int b[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
  b[i]=sl(i,a[i]);
my_printf("%d\n",b[i]);
}
return 0;
}
int sl(int i,int n){
	int r;
s[0]=1;
s[1]=1;
for(i=2;i<n;i++){
   s[i]=s[i-1]+s[i-2];
}
r=s[n-1];
return r;
}

