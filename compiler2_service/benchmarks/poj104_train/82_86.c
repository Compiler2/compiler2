#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int ss[100],sz[100];
	int i,qk[100];
	for(i=0;i<n;i++){
		my_scanf("%d%d",&ss[i],&sz[i]);
	}
	int e;
	for(e=0;e<n;e++){
		if(ss[e]>=90&&ss[e]<=140&&sz[e]>=60&&sz[e]<=90){
			qk[e]=1;
		}
		else{qk[e]=0;}
	}
	int a=0,c=0;
	int r;
	for(r=0;r<n;r++){
		if(qk[r]==1){
		  int t;
		  for(t=r;qk[t]==1;t++){
			  c++;
		  }
			}
		if(c>a){a=c;}
		c=0;
	}
	my_printf("%d",a);
	return 0;
}

