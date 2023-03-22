#define NUM_ITER 85716

#include <header.h>


int days(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		sum=sum+2;       
		else sum++;      
	}
	return sum;
}
int main_bench()
{
    int y,m,d,i,totaldays=0;
		int w;
	int k[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	my_scanf("%d%d%d",&y,&m,&d);
	if(y%4==0&&y%100!=0||y%400==0)k[1]=29;
	y %= 400;
	if (y == 0) y = 400;
	for(i=0;i<m-1;i++)
		{
			totaldays=totaldays+k[i];
		}
		totaldays=totaldays+d+days(y);

		w=totaldays%7;
		switch(w)
		{
			  case 0:  
				   my_printf("Sun.");  
				   break;  
			  case 1:  
				   my_printf("Mon.");  
				   break;  
			  case 2:  
				   my_printf("Tue.");  
				   break;  
			  case 3:  
				   my_printf("Wed.");  
				   break;  
			case 4:  
				  my_printf("Thu.");   
					break;  
			case 5:  
				  my_printf("Fri.");   
					break;  
			case 6:  
				  my_printf("Sat.");   
					break;  
		}
	return 0;
}