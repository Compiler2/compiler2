#define NUM_ITER 37483

#include <header.h>

int main_bench(){
int n,i,c=0,d=0;
int a[1000],b[1000];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
if((a[i]-b[i]==-1)||(a[i]-b[i]==2)) c++;
else if((a[i]-b[i]==1)||(a[i]-b[i]==-2)) d++;
else ;
}
if(c>d) my_printf("A");
else if(c<d) my_printf("B");
else my_printf("Tie");
return 0;
}