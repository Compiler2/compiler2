#include <header.h>

int main_bench(){
 int i,j,m,n,a[5][5];
 for(i=0;i<5;i++){
    for(j=0;j<4;j++){
        my_scanf("%d",&(a[i][j]));
     }
    my_scanf("%d\n",&(a[i][4]));
  }
 my_scanf("%d%d",&n,&m);
 if(m<=4&&n<=4){
  for(j=0;j<5;j++){
    i=a[n][j];
    a[n][j]=a[m][j];
    a[m][j]=i;
  }
for(i=0;i<5;i++){
  for(j=0;j<4;j++){
    my_printf("%d ",a[i][j]);
   }
  my_printf("%d\n",a[i][4]);
 }

 }else{
my_printf("error");
}
return 0;
}