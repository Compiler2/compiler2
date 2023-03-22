#include <header.h>

int main_bench()
{
    int m,n;
    int sz[5][5],i,p;
    for(i=0;i<5;i++){
        for(p=0;p<5;p++){
			my_scanf("%d",&sz[i][p]);
		}
	}
	my_scanf("%d %d",&m,&n);
	if(m>4||n>4){my_printf("error");return 0;}
	for(i=0;i<5;i++){
		int tem;
		tem=sz[m][i];
		sz[m][i]=sz[n][i];
		sz[n][i]=tem;
	}
    for(i=0;i<5;i++){
		my_printf("%d",sz[i][0]);
        for(p=1;p<5;p++){
			my_printf(" %d",sz[i][p]);
		}my_printf("\n");
	}
	return 0;
}