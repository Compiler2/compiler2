#define NUM_ITER 235561

#include <header.h>

int main_bench(){
	int sz[5][5];
	int n,m,x,y,i=0,j=0;
	for(x=0;x<5;x++){
		for(y=0;y<5;y++){
			my_scanf("%d",&sz[x][y]);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(n>-1&&n<5&&m>-1&&m<5){
		trans(m,n,sz);
		for(x=0;x<5;x++){
			for(y=0;y<5;y++){
				if(y!=4)
					my_printf("%d ",sz[x][y]);
				else
					my_printf("%d\n",sz[x][y]);
			}
		}
		return 1;
	}
	else{
		my_printf("error");
		return 0;

	}
}
int trans(int m_,int n_,int sz[5][5]){
         int y_;
         for(y_=0;y_<5;y_++){
			int e;
			e=sz[n_][y_];
			sz[n_][y_]=sz[m_][y_];
			sz[m_][y_]=e;
		}
}