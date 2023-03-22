#include <header.h>

int main_bench(){
struct{
int a,b;
}sz[100];
int n,i,x=0,y=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %d",&sz[i].a,&sz[i].b);
}
for(i=0;i<n;i++){
if(sz[i].a-sz[i].b==-1||sz[i].a-sz[i].b==2){x++;}
else if(sz[i].a-sz[i].b==1||sz[i].a-sz[i].b==-2){y++;}
else{continue;}
}
if(x>y){my_printf("A");}
else if(x==y){my_printf("Tie");}
else{my_printf("B");}
return 0;
}

