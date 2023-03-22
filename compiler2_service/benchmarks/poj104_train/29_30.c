#include <header.h>


int main_bench(){
	 int m,n,i=0,j=0;
	 double a=1,b=2,c,sum=0;
	 
	 my_scanf("%d",&m);
	 for( i=0;i<m;i++){
		 my_scanf("%d",&n);
		 for(j=0;j<n;j++){
			 sum+=b/a;
			 c=b;
			 b=a+b;
			 a=c;
		 }
		 my_printf("%.3lf\n",sum);
		 sum=0;
		 a=1;
		 b=2;
	 }

	 
	
	 return 0;
}
