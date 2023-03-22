#include <header.h>

int main_bench()
{
	int x,y,i,j=0,max=0,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%d %d",&x,&y);
	if(x<=140&&x>=90&&y<=90&&y>=60){
	j=j+1;
	}else{
		if(j>max){
			max=j;}
	j=0;
	}
	}
	if(j>max){
	my_printf("%d",j);
	}
	else{
		my_printf("%d",max);
	}
	return 0;
}