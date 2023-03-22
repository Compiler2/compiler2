#include <header.h>

int main_bench()
{
	char s[20],q[20];
	char a,b;
	int k,m,n,p,i,amount,max,sum;
         max=0;
	 sum=0;
    my_scanf("%d",&k);
	for(i=0;i<k;i++)

	{
		
		my_scanf("%s",s);
		my_scanf("%d%d ",&m,&n);
		my_scanf("%c %c",&a,&b);
		my_scanf("%d",&p);
		amount=0;
                if((m>80) && (p>=1))
			amount+=8000;
		if((m>85) && (n>80))
			amount+=4000;
		if(m>90)
			amount+=2000;
		if((m>85) && (b=='Y'))
			amount+=1000;
		if((n>80) && (a=='Y'))
			amount+=850;
 	     sum+=amount;

		if(amount>max)
		{
			strcpy(q,s);
			max=amount;
                 }
	
			
	}
	
	
		my_printf("%s\n",q);
		my_printf("%d\n",max);
			my_printf("%d\n",sum);
	return 0;
}


