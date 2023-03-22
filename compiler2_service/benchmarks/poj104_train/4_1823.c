#define NUM_ITER 542

#include <header.h>


int main_bench(){
int n,m,i,j,a[100][100],x=0,y=0,k=0,l=0;
my_scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
 for(j=0;j<m;j++)
  my_scanf("%d",&a[i][j]);

for(;;){
 my_printf("%d\n",a[x][y]);
 if(x==n-1 && y==m-1)break;
 if(y==0 || x==n-1){
   if(l==m-1)k++;
   else l++;
   x=k;y=l;
   continue;
 }
 x++;y--;                           
}

}
