#include <header.h>

int main_bench()
{
	int s[5][5],m,n;
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&s[i][j]);
		my_scanf("%d %d",&m,&n);
			if(m>=5||n>=5)
				my_printf("error");
			else{
				for(i=0;i<5;i++){
					for(j=0;j<4;j++)
					{
						if(i==m)
							my_printf("%d ",s[n][j]);
						else if(i==n)
							my_printf("%d ",s[m][j]);
						else my_printf("%d ",s[i][j]);
					}
					if(i==m)
						my_printf("%d",s[n][4]);
					else if(i==n)
						my_printf("%d",s[m][4]);
					else my_printf("%d",s[i][4]);
					my_printf("\n");
				}
			}
}
