#include <header.h>

int main_bench()
{
	int a[300]={0};
	char x;
    int i=0,j,k,t;
	my_scanf("%c",&x);
	while(x!='\n')
	{
		if(x!=',')
		{
		 a[i]=a[i]*10+x-'0';
		}
		else i++;
		my_scanf("%c",&x);
	}
	if(i==0) my_printf("No\n");
	else 
	{
	  for(j=0;j<=i-1;j++)
	  {
		for(k=j+1;k<=i;k++)
		{
			if(a[k]>a[j]) {t=a[j];a[j]=a[k];a[k]=t;}
		}
	  }
      if(a[0]==a[i]) my_printf("No\n");
	  else
	  {
       for(j=1;j<=i;j++)
		   if(a[j]!=a[0]) {my_printf("%d\n",a[j]);break;}
	  }
	}	
}
