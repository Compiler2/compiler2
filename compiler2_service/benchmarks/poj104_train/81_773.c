#define NUM_ITER 216900

#include <header.h>

int y(int n,int m){if(n>=0&&n<=4&&m>=0&&m<=4){return 1;}else{return 0;}}
int main_bench(){
 int a[5][5], i,j,t,m,n;
 for(i=0;i<5;i++){for(j=0;j<5;j++){my_scanf("%d",&a[i][j]);}}
 my_scanf("%d%d",&n,&m);
 if(y(n,m)==0){ my_printf("error");return 0;}
 if(y(n,m)==1){for(j=0;j<5;j++){
t=a[n][j];a[n][j]=a[m][j];a[m][j]=t;
               }}
 for(i=0;i<5;i++){for(j=0;j<5;j++){ if(j<4){my_printf("%d ",a[i][j]);}else if(j==4){my_printf("%d\n",a[i][j]);}}}
 return 0;}

