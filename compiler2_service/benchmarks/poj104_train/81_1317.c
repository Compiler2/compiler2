#define NUM_ITER 226137

#include <header.h>


int panduan(int x,int y){
	if(x>=0&&x<5&&y>=0&&y<5)
		return 1;
	else
		return 0;
}

int main_bench(){
     int i,j,m,n,t,pd=0,a[5][5];
	 for(i=0;i<5;i++){
		 for(j=0;j<5;j++){
			 my_scanf("%d",&a[i][j]);
		 }
	 }
	 my_scanf("%d%d",&m,&n);
     pd=panduan(m,n);
	 if(pd==0)
		 my_printf("error\n");
	 else{
		 for(j=0;j<5;j++){
			 t=a[m][j];
			 a[m][j]=a[n][j];
			 a[n][j]=t;
		 }
	    for(i=0;i<5;i++){
		 for(j=0;j<5;j++){
			 if(j!=4)
			 my_printf("%d ",a[i][j]);
			 if(j==4)
				 my_printf("%d\n",a[i][j]);
		 }
	 }
	 }
	 return 0;

}
