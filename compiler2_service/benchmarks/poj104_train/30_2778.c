#include <header.h>

int main_bench(){
int n,sum=0;
my_scanf("%d",&n);
for(int i=1;i<=n;i++){
if(i%7!=0&&(i-7)%10!=0&&i<70){
sum+=i*i;
}
else if(i%7!=0&&(i-7)%10!=0&&i>79){
sum+=i*i;
}
}
my_printf ("%d",sum);
return 0;
}