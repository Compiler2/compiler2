#define NUM_ITER 211

#include <header.h>

int main_bench()
{
	int n[301]={-1};
	int m[301]={-1};
	int g[501]={0};
	int d,a,i,x,j,c=0;

	for(i=1;n[i-1]!=0&&m[i-1]!=0;i++){	  
	  my_scanf("%d",&n[i]);
	  my_scanf("%d",&m[i]);
	  c++;
	}

	for(j=1;j<c;j++){
		for(i=1;i<=500;i++){
		   g[i]=0;
		}

	    d=0;
		for(x=n[j];x>0;){
			for(i=1;i<=n[j];i++){
				if(g[i]==0){
				  d++;
				  if(d%m[j]==0){
				    g[i]=1;
					x--;
					if(x==0)
					{a=i;}
				  }
				}
			}
		}
		my_printf("%d\n",a);
	
	} 
return 0;

}