#define NUM_ITER 46389

#include <header.h>

int main_bench(){
int  n,u[100],i;
my_scanf("%d",&n);
for(i=1;i<=n;i++){ my_scanf("%d",&u[i]);
}
int s=0,m=0;
for(i=1;i<=n;i++){
while(s<u[i]) s=u[i];
}
for(i=1;i<=n;i++){
while(m<u[i]&&u[i]<s) m=u[i];
}
my_printf("%d\n%d\n",s,m);
return 0;
}