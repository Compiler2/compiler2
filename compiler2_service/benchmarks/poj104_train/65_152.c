#define NUM_ITER 32619

#include <header.h>

int main_bench(){
int n,a,b,i,s=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %d ",&a,&b);
if(a==0&&b==1){s=s+1;}
else if(a==1&&b==2){s=s+1;}
else if(a==2&&b==0){s=s+1;}
else if(a==1&&b==0){s=s-1;}
else if(a==2&&b==1){s=s-1;} 
else if(a==0&&b==2){s=s-1;}  
}
if(s>0){my_printf("A");}
else if(s<0){my_printf("B");}
else{my_printf("Tie");}
return 0;
}