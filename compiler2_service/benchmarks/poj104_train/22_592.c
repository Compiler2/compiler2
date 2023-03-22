#include <header.h>

int main_bench()
{
	int i=1,n,m,num[300],sub,flag=0;
	my_scanf("%d",&num[0]);
	while(my_scanf(",%d",&num[i]))
	{
		i++;
	}
	n=i;
	m=num[0];
	for(i=1;i<n;i++)
	{
		if(m<num[i]) m=num[i];
		flag=1;
	}
	if(flag==0) {my_printf("No");return 0;}
	sub=0;
	for(i=0;i<n;i++)
	{
		if(num[i]==m) continue;
		if((sub<num[i])) sub=num[i];
	}
	

	if(sub!=0) my_printf("%d",sub);
	else my_printf("No");
	return 0;
}
