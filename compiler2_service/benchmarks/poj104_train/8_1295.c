#define NUM_ITER 16

#include <header.h>


int main_bench()
{
	int word1[100],word2[100];
    int num1,num2;
	my_scanf("%d %d",&num1,&num2);
	int i;
	for(i=0;i<num1;i++)
	{
		my_scanf("%d",&word1[i]);
	}
	my_printf("\n");
	for(i=0;i<num2;i++)
	{
		my_scanf("%d",&word2[i]);
	}
	my_printf("\n");
	int j,k,temp;
	for(j=1;j<=num1*num1;j++)
	{
		for(k=0;k<num1-1;k++)
		{
			if(word1[k]>=word1[k+1])
			{
				temp=word1[k];
				word1[k]=word1[k+1];
				word1[k+1]=temp;
			}
		}
	}
	for(j=1;j<=num2*num2;j++)
	{
		for(k=0;k<num2-1;k++)
		{
			if(word2[k]>=word2[k+1])
			{
				temp=word2[k];
				word2[k]=word2[k+1];
				word2[k+1]=temp;
			}
		}
	}
	int zjword[300],l;
	for(l=0;l<num1+num2;l++)
	{
		if(l<num1)
		{
			zjword[l]=word1[l];
		}else{
			zjword[l]=word2[l-num1];
		}
	}
	int m;
	for(m=0;m<num1+num2;m++)
	{
		if(m!=num1+num2-1)
		my_printf("%d ",zjword[m]);
		else my_printf("%d",zjword[m]);
	}
	return 0;
}
