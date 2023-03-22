#define NUM_ITER 34379

#include <header.h>

int main_bench()
{
	int in[1002],out[1002],time[1002]={0};
	int temp,i,j,k,num;
	char space;
	for(i=0;;i++)
	{
		my_scanf("%d%c",&temp,&space);
		in[i]=temp;
		if(space!=',') break;
	}
	num=i+1;
	for(i=0;;i++)
	{
		my_scanf("%d%c",&temp,&space);
		out[i]=temp;
		if(space!=',') break;
	}
	for(i=0;i<num;i++){
		for(j=in[i];j<out[i];j++){
			time[j]++;
		}
	}
	int max=0;
	for(i=0;i<=1001;i++){
		if(time[i]>max)
			max=time[i];
	}
	my_printf("%d %d",num,max);		  
}




