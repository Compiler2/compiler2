#define NUM_ITER 657

#include <header.h>



int main_bench(){
 int a[100][100],n,b,c,d=0,x1,x2,y1,y2,m;
 my_scanf("%d",&n);
 for(b=0;b<n;b++){
	 for(c=0;c<n;c++){
		 my_scanf("%d",&a[b][c]);
	     if(a[b][c]==0&&d==0){
			 x1=b;
			 y1=c;
			 d=1;
		 }
         else if(a[b][c]==0&&d==1){
			 x2=b;
			 y2=c;
		 }
	 }
 }
m=(x2-x1-1)*(y2-y1-1);
my_printf("%d",(x2-x1-1)*(y2-y1-1));
return 0;
}