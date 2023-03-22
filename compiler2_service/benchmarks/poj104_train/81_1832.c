#define NUM_ITER 235826

#include <header.h>


int main_bench()
{
int sw(int a[5][5],int n,int m);
int i,j,m,n,a[5][5],q,h;
if(sw(a,n,m)==0)my_printf("error");
else {for(q=0;q<5;q++){
for(h=0;h<4;h++)
my_printf("%d ",a[q][h]);
my_printf("%d",a[q][4]);
my_printf("\n");
}}
return 0;}



int sw(int a[5][5],int n,int m)
{
	int i,j,q,h;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
my_scanf("%d",&a[i][j]);
my_scanf("%d%d",&n,&m);
	int p,t;

if(n>=0&&n<5&&m>=0&&m<5){
for(p=0;p<5;p++){
t=a[n][p];a[n][p]=a[m][p];a[m][p]=t;
}
return 1;}
return 0;
	
	
}


