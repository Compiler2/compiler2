#define NUM_ITER 10135

#include <header.h>







	struct student{
		char name[25];
		int q,b,l,money;
		char w,x;
	};

	
	
	
	int main_bench()
	{
		struct student a[100];
		int n,i;
		int sum=0,max=0,max_i=0,m[100]={0};

		my_scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			my_scanf("%s %d %d %c %c %d",a[i].name,&a[i].q,&a[i].b,&a[i].w,&a[i].x,&a[i].l);
			if((a[i].q>80)&&(a[i].l>=1))
			{m[i]+=8000;}
			if((a[i].b>80)&&(a[i].q>85))
			{m[i]+=4000;}
			if(a[i].q>90)
			{m[i]+=2000;}
			if((a[i].q>85)&&(a[i].x=='Y'))
			{m[i]+=1000;}
			if((a[i].b>80)&&(a[i].w=='Y'))
			{m[i]+=850;}
			a[i].money=m[i];

		}
		
		
		
		
		
		
		m[0]=max=a[0].money;
		max_i=0;
		for(i=0;i<n;i++)
		{
			sum+=m[i];
			if(a[i].money>max)
			{
				max=a[i].money;
				max_i=i;
			}
			
		}
		
		
		my_printf("%s\n",a[max_i].name);
		my_printf("%d\n",m[max_i]);
		my_printf("%d\n",sum);


	
		
	return 0;
	   
        
	
	}