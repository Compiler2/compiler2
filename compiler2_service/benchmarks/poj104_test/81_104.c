#include <header.h>

int main_bench(){
int a[5][5],i,j,n,m,e;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
my_scanf("%d",&a[i][j]);}}
my_scanf("%d %d",&n,&m);
if(n>4||m>4||n<0||m<0){my_printf("error");}
else {
    for(j=0;j<5;j++){
	e=a[n][j];
	a[n][j]=a[m][j];
    a[m][j]=e;}

for(i=0;i<5;i++){
	for(j=0;j<5;j++){
my_printf("%d",a[i][j]);
if(j==4){my_printf("\n\n");}
else{my_printf(" ");}}}
}

return 0;
}