#include <header.h>


int main_bench()
{
int sz[10][10],xsz[10];
int i,j,n,m;
for(i=0;i<5;i++){
for(j=0;j<5;j++){
my_scanf("%d",&sz[i][j]);
}
}
my_scanf("%d %d",&n,&m);
if((n<5)&&(m<5)){
for(j=0;j<5;j++){
xsz[j]=sz[n][j];
sz[n][j]=sz[m][j];
sz[m][j]=xsz[j];
}
for(i=0;i<5;i++){
for(j=0;j<4;j++){
my_printf("%d ",sz[i][j]);
}
my_printf("%d\n",sz[i][4]);
}
}
else
my_printf("error\n");

return 0;
}
