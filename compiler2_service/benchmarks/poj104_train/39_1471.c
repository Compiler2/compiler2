#include <header.h>

int main_bench()
{
	int n,i,maxmoney,sum=0;
	char name[21];char maxname[21];
	int qimo[100]={0};int banji[100]={0};char ganbu[100];char xibu[100];int lunwen[100]={0};int money[100]={0};
	my_scanf("%d",&n);
    

	for(i=1;i<=n;i++)
	{
		my_scanf("%s",name);

        
		my_scanf(" %d %d",&qimo[i-1],&banji[i-1]);
		my_scanf(" %c %c",&ganbu[i-1],&xibu[i-1]);
		my_scanf(" %d",&lunwen[i-1]);
		if(qimo[i-1]>80&&lunwen[i-1]>=1) money[i-1]=money[i-1]+8000;
		if(qimo[i-1]>85&&banji[i-1]>80) money[i-1]=money[i-1]+4000;
		if(qimo[i-1]>90) money[i-1]=money[i-1]+2000;
		if(qimo[i-1]>85&&xibu[i-1]=='Y') money[i-1]=money[i-1]+1000;
		if(banji[i-1]>80&&ganbu[i-1]=='Y') money[i-1]=money[i-1]+850;
		if(i==1) 
		{
			maxmoney=money[0];
		    strcpy(maxname,name);
		}
		sum=sum+money[i-1];
		if(i>=2)
		{
			
		if (money[i-1]>maxmoney)
		
		{
			maxmoney=money[i-1];
			strcpy(maxname,name);

		}
			
		}
	}


	my_printf("%s\n",maxname);
	my_printf("%d\n",maxmoney);
	my_printf("%d\n",sum);

	
	return 0;
}
