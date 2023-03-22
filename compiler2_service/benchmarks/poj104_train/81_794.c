#include <header.h>

int main_bench(){
int a[5][5];
int b[5];
int i,k,n,m;
for(i=0;i<5;i++){
for(k=0;k<5;k++){
my_scanf("%d",&(a[i][k]));
}
}
my_scanf("%d%d",&n,&m);
if(n<0||n>4||m<0||m>4){
my_printf("error");
}
if(n>=0&&n<=4&&m>=0&&m<=4){
for(i=0;i<5;i++){
b[i]=a[n][i];
a[n][i]=a[m][i];
a[m][i]=b[i];
}
for(i=0;i<5;i++){
my_printf("%d",a[i][0]);
for(k=1;k<5;k++){
my_printf(" %d",a[i][k]);
if(k==4){
my_printf("\n");
}
}
}
}
return 0;
}

