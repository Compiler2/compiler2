#define NUM_ITER 3794

#include <header.h>

int main_bench(){
	int n,i,j;
	struct {
		int y,a;
		char id[10];
	}p[100],t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s %d",p[i].id,&p[i].y);
		p[i].a=i+1;
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i].y>=60||p[j].y>=60)
			{
			  if(p[j].y>p[i].y)
			  {
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			  }
			  else if(p[i].y==p[j].y)
			  {
				  if(p[j].a<p[i].a){
					t=p[i];
				p[i]=p[j];
				p[j]=t;
				}
			  }
			}
			else{
				if(p[j].a<p[i].a){
					t=p[i];
				p[i]=p[j];
				p[j]=t;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		my_printf("%s\n",p[i].id);
	}
return 0;
}