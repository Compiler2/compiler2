#include <header.h>

int main_bench()
{
	char a[100][100];
	int j,n,i,count=0,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	my_scanf("%s",&a[i]);
	for(j=0;j<strlen(a[i]);j++)
	{
		if((int)a[i][0]>47&&(int)a[i][0]<58)
		{count++;break;}
		if((((int)a[i][j])<58&&((int)a[i][j]>47))||(((int)a[i][j]<91)&&((int)a[i][j]>64))||(((int)a[i][j]<123)&&((int)a[i][j]>96))||(((int)a[i][j]==95)))
        	continue;
    	else count++;}
	   if(count==0)
		my_printf("yes\n");
		else my_printf("no\n");
		count=0; 
	}
	
return 0;
}
	
