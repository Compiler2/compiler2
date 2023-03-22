#include <header.h>

int main_bench(){
	int e,n,m=0;
	my_scanf("%d",&n);
int num[500],sz[500];
	for(int i=0;i<n;i++){
	my_scanf("%d",&(num[i]));
}	
for(int i=1;i<n;i++){
		 for(int j=0;j<n-i;j++){
		 		 if(num[j]>num[j+1]){
				 		e=num[j];
						 num[j]=num[j+1];
						 num[j+1]=e;			 
		 		 }
		 }
}
for(int i=0;i<n;i++){
		if(num[i]%2==1){
						sz[m]=num[i];
						m++;
		}
}
for(int i=0;i<m-1;i++){
		my_printf("%d,",sz[i]);
}
my_printf("%d",sz[m-1]);
return 0;	
}