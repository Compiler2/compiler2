#define NUM_ITER 482394

#include <header.h>


int mon[14]={31,28,31,30,31,30,31,31,30,31,30,31};

int main_bench()
{
    int we1,i;

	int mon[14]={31,28,31,30,31,30,31,31,30,31,30,31};

    my_scanf("%d",&we1);

    int judge(int x,int y);

	for(i=1;i<13;i++){
		if(judge(we1,i)==1)
			my_printf("%d\n",i);
	}

	return 0;
}

int judge(int x,int y){
	int sum=0,i;

    for(i=0;i<y-1;i++){
		sum+=mon[i];
	}

	sum+=13;

	if((sum+x-1)%7==5)
		return 1;
	else
		return 0;
}
