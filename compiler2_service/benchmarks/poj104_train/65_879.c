#define NUM_ITER 35304

#include <header.h>

int main_bench(){
int n;
int x,y;
x=0;y=0;
my_scanf("%d",&n);
int a[n],b[n];
for(int i=0;i<n;i++){
    my_scanf("%d%d",&a[i],&b[i]);
    if(a[i]-b[i]==-1||a[i]-b[i]==2){x++;}
    else if(a[i]==b[i]){x=x;}
    else{y++;}




}
if(x>y){my_printf("A");return 0;}
if(x<y){my_printf("B");}
else{my_printf("Tie");
}return 0;

}