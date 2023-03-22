#define NUM_ITER 5324

#include <header.h>

int main_bench(){
int m,n,fm,fn,i,j;double s=0;
my_scanf("%d",&m);
for(i=1;i<=m;i++){s=0;my_scanf("%d",&n);fm=1;fn=1;
for(j=1;j<=n;j++){fm=fm+fn;fn=fm-fn;s+=(1.0*fm)/fn;}


my_printf("%.3f\n",s);



}

return 0;
}