#include <header.h>

int main_bench(){
int m,n,sz[100][100],x,y,z,f,g,w,k;
my_scanf("%d %d",&m,&n);
for(int p=0;p<m;p++){
    for(int q=0;q<n;q++){
	   my_scanf("%d",&sz[p][q]);
	}
}
for( x=0;x<m/2&&x<n/2;x++){
for( y=x;y<n-1-x;y++){
   my_printf("%d\n",sz[x][y]);
}
for( z=x;z<m-1-x;z++){
   my_printf("%d\n",sz[z][y]);
}
for( f=n-1-x;f>x;f--){
   my_printf("%d\n",sz[z][f]);
}
for( g=m-1-x;g>x;g--){
   my_printf("%d\n",sz[g][f]);
}
}
if(m%2==1&&n>=m){
   w=m/2;
   for(k=w;k<n-w;k++){
   my_printf("%d\n",sz[w][k]);
   }
}
else if(n%2==1&&m>n){
   w=n/2;
   for(k=w;k<m-w;k++){
      my_printf("%d\n",sz[k][w]);
   }
}
return 0;
}