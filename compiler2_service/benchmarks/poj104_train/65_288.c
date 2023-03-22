#define NUM_ITER 33982

#include <header.h>

int main_bench()
{
int n,i,a,b;
int s[200];
int p[200];
a=0;
b=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&s[i],&p[i]);
if(s[i]==0&&p[i]==1||s[i]==1&&p[i]==2||s[i]==2&&p[i]==0){
a++;
}
else if(p[i]==0&&s[i]==1||p[i]==1&&s[i]==2||p[i]==2&&s[i]==0){
b++;
}
else if(p[i]==0&&s[i]==0||p[i]==1&&s[i]==1||p[i]==2&&s[i]==2){
a=a;
b=b;
}
}
if(a>b){
my_printf("A");
}
if(a<b){
my_printf("B");
}
if(a==b){
my_printf("Tie");
}
return 0;
}