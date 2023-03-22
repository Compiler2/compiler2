#include <header.h>

int main_bench()
{
	int jiaohuan(int (*s)[5],int n,int m);
	int i,j,n,m,shuzu[5][5],(*s)[5]=shuzu;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			my_scanf("%d",&*(*(s+i)+j));
	}
	my_scanf("%d%d",&n,&m);
	if(jiaohuan(s,n,m)==0)
		my_printf("error");
	else{
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==0)
					my_printf("%d",*(*(s+i)+j));
				else
					my_printf(" %d",*(*(s+i)+j));
			}
			my_printf("\n");
		}
	}
	return 0;
}
int jiaohuan(int (*s)[5],int n,int m)
{
	int i,temp;
	if(n>=0&&n<5&&m>=0&&m<5){
		for(i=0;i<5;i++){
			temp=*(*(s+n)+i);
			*(*(s+n)+i)=*(*(s+m)+i);
			*(*(s+m)+i)=temp;
		}
		return 1;
	}
	else
		return 0;
}