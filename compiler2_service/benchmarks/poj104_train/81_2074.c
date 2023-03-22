#define NUM_ITER 236003

#include <header.h>

int main_bench(){
int sz[5][5],m,n,a,b;
for(int k=0;k<=4;k++){
for(int t=0;t<=4;t++){
my_scanf("%d",&sz[k][t]);}}
my_scanf("%d%d",&m,&n);
if(m<=4&&n<=4){
for(int i=0;i<5;i++){
b=sz[m][i];
sz[m][i]=sz[n][i];
sz[n][i]=b;}
for(int p=0;p<=4;p++){
for(int q=0;q<=3;q++){
my_printf("%d ",sz[p][q]);
}my_printf("%d\n",sz[p][4]);
}
}
else{
my_printf("error");
}
return 0;
}

