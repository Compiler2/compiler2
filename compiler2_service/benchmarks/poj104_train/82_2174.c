#define NUM_ITER 31039

#include <header.h>


int main_bench()
{
	int normal(int x,int y);
	int n,i,c=0,t=0,a[100],b[100];
	my_scanf("%d",&n);
    for(i=0;i<=n-1;i++){
	my_scanf("%d %d",&a[i],&b[i]);
		if(normal(a[i],b[i])==1){
		t+=1;
		    if(t>c){
	    	c=t;
				}
			}
		if(normal(a[i],b[i])==0){
			t=0;
		}
	}
	my_printf("%d\n",c);
	return 0;
}
int normal(int x,int y){
    int z;
	if(x>=90&&x<=140&&y>=60&&y<=90)
		z=1;
	else z=0;
	return (z);
}