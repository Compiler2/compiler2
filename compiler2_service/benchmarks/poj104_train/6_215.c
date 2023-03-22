#include <header.h>



int main_bench()
{    int n,k,m,i,j,t,s;
     int a[100][100];
     my_scanf("%d",&k);
     for(t=0;t<k;t++){
		 my_scanf("%d %d",&m,&n);
		 s=0;
		 for(i=0;i<m;i++){
		   for(j=0;j<n;j++){
                     my_scanf("%d",&a[i][j]);
		   if(i==0||i==m-1){
		   s=s+a[i][j];}
		   if((j==0||j==n-1)&&i!=0&&i!=m-1){
		   s=s+a[i][j];}
		   }
		 }
    my_printf("%d\n",s);
}
	return 0;
}
