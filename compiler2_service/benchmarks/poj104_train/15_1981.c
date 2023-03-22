#include <header.h>

int e[1000][1000];
int main_bench()
{
   int i,j,n,a,b,c=0,d=0,t;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
   	for(j=0;j<n;j++){
   		my_scanf("%d",&e[i][j]);
   	}
   }
   	for(i=0;i<n;i++){
   		for(j=0;j<n;j++){
   			if(e[i][j]==0){
   				a=i;
   				b=j;
   			}
   		}
   	}
   	for(j=b;j>=0;j--){
   		if(e[a][j]==0){
   			c++;
   		}
   		else 
   		break;
   	}
   	for(i=a;i>=0;i--){
   		if(e[i][b]==0){
   			d++;
   		}
   		else 
   		break;
   	}
    t=(c-2)*(d-2);
   	my_printf("%d",t);
    return 0;
}

