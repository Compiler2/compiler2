#include <header.h>

int main_bench()
{
	int i,j,n,m;
	char zfc[1000][25];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		if((zfc[i][0]>='a'&&zfc[i][0]<='z')||(zfc[i][0]>='A'&&zfc[i][0]<='Z')||zfc[i][0]=='_')
		{
		    for(j=1;zfc[i][j]!='\0';j++)
			{
			   if((zfc[i][j]>='a'&&zfc[i][j]<='z')||(zfc[i][j]>='A'&&zfc[i][j]<='Z')||(zfc[i][j]>='0'&&zfc[i][j]<='9'||zfc[i][j]=='_'))
			   m=1;
			   else
			   {
				   m=0;
				   my_printf("no\n");
				   break;
			   }
			}
			 if(m==1)
				   my_printf("yes\n");
		}else{
            my_printf("no\n");    
		}
	}
	return 0;
}