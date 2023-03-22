#include <header.h>

int main_bench(){
	double rate;
	my_scanf("%lf",&rate);
	char DNA[2][501];
	my_scanf("%s",DNA[0]);
	my_scanf("%s",DNA[1]);
	int t;
	int i,j;
	int number=0;
	t=strlen(DNA[0]);
	int w;
	w=strlen(DNA[1]);
	if (t!=w)
	{
		my_printf("error");
		
		return 0;
	}
	for (i=0;i<t;i++)
	{
		if (DNA[0][i]!='A'&&DNA[0][i]!='T'&&DNA[0][i]!='C'&&DNA[0][i]!='G')
		{
			my_printf("error");
			
			return 0;
		}
		if (DNA[1][i]!='A'&&DNA[1][i]!='T'&&DNA[1][i]!='C'&&DNA[1][i]!='G')
		{
			my_printf("error");
			
			return 0;
		}
		if (DNA[0][i]==DNA[1][i])
		{
			number++;
		}
		
	}
	double r;
	r=1.00*number/t;
	if (r>=rate)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}


	
	return 0;

}