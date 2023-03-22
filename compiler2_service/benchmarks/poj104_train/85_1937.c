#include <header.h>

int main_bench(){
	int n,i,j;
	char str[100][21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",str[i]);
	for(i=0;i<n;i++)
		if(str[i][0]<'A'
			||(str[i][0]>'Z'&&str[i][0]<'a'&&str[i][0]!='_')
			||str[i][0]>'z')
				my_printf("no\n");
		else
			for(j=0;j<strlen(str[i]);j++)
				if(str[i][j]<'0'
					||(str[i][j]>'9'&&str[i][j]<'A')
					||(str[i][j]>'Z'&&str[i][j]<'a'&&str[i][j]!='_')
					||str[i][j]>'z'
					){
						my_printf("no\n");
						break;
				}
				else if(j==strlen(str[i])-1)
					my_printf("yes\n");
	return 0;
}
