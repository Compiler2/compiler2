#define NUM_ITER 30420

#include <header.h>

int main_bench(){
int n,a[200],b[200],c=0,d=0;
my_scanf("%d",&n);
for(int i=0;i<n;i++){
my_scanf("%d %d\n",&a[i],&b[i]);}
for(int j=0;j<n;j++){
if((a[j]==0)&&(b[j]==0)){c+=0;d+=0;}
if((a[j]==0)&&(b[j]==1)){c++;}
if((a[j]==0)&&(b[j]==2)){d++;}
if((a[j]==1)&&(b[j]==0)){d++;}
if((a[j]==1)&&(b[j]==1)){c+=0;d+=0;}
if((a[j]==1)&&(b[j]==2)){c++;}
if((a[j]==2)&&(b[j]==0)){c++;}
if((a[j]==2)&&(b[j]==1)){d++;}
if((a[j]==2)&&(b[j]==2)){c+=0;d+=0;}
}
if(c<d){my_printf("B");}
if(c==d){my_printf("Tie");}
if(c>d){my_printf("A");}
return 0;
}
