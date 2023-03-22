#include <header.h>



int main_bench()
{
	int n,i,letters=0,space=0;
	char (*word)[41];
	my_scanf("%d",&n);
	word=(char *)malloc((n+1)*41*sizeof(char));
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word+i);
	}
	for(i=0;i<n;i++)
	{
		letters+=(strlen(word+i));
		if(letters>80)
		{
			letters=strlen(word+i);
			my_printf("\n%s",word+i);
		}else if(letters==80){
			letters=0;
			my_printf(" %s\n",word+i);
			space=0;
			letters--;
		}else if(space==0){
			my_printf("%s",word+i);
			space++;
		}else{
			my_printf(" %s",word+i);
		}
		letters++;
	}
	return 0;
}