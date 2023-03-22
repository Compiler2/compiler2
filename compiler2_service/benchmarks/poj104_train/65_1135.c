#include <header.h>

int main_bench()
{
int A,B,a[200],b[200],n,i;
my_scanf("%d",&n);
A=0;
B=0;
for(i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
if(b[i]-a[i]==1||a[i]-b[i]==2){
    A++;
    
}
else if(a[i]==b[i]){continue;}
else{B++;}
}
if(A>B){my_printf("A");}
else if(A==B){my_printf("Tie");}
else{my_printf("B");}
return 0;
}

