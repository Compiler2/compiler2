#include <header.h>

int jud(int n,int m){
	if(n>=0&&n<=4&&m>=0&&m<=4)
		return 1;
	else return 0;
}
int main_bench(){
int a[5][5],i,j,n,m,*p[5],*q;
for(i=0;i<5;i++){
for(j=0;j<5;j++)
my_scanf("%d",&a[i][j]);
p[i]=a[i];}
my_scanf("%d %d",&n,&m);
if(jud(n,m)==0)
my_printf("error");
else{
q=p[n];
p[n]=p[m];
p[m]=q;
for(i=0;i<5;i++)
for(j=0;j<5;j++){
if(j==4)
my_printf("%d\n",*(p[i]+j));
else my_printf("%d ",*(p[i]+j));}}
return 0;}