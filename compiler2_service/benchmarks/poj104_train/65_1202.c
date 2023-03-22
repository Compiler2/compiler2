#include <header.h>

int main_bench(){
int n,i,c;
c=0;
my_scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
my_scanf("%d %d",&a[i],&b[i]);
if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){c=c+1;}
else if(a[i]==b[i]){c=c;}
else if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)){c=c-1;}}
if(c>0){my_printf("A");}
else if(c==0){my_printf("Tie");}
else if(c<0){my_printf("B");}
return 0;
}

