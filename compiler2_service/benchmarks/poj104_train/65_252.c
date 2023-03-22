#define NUM_ITER 34647

#include <header.h>

int main_bench()
{
int a,b,i,n;
int c=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %d",&a,&b);
if(a==0&&b==1||a==1&&b==2||a==2&&b==0){c=c+1;}
else if(a==0&&b==2||a==1&&b==0||a==2&&b==1){c=c-1;}
}
if(c==0){my_printf("Tie");}
else if(c>0){my_printf("A");}
else if(c<0){my_printf("B");}
return 0;
}

