#define NUM_ITER 1308539

#include <header.h>

int main_bench()
{
	char str[100];
	char res[100];
	my_scanf("%s",str);
	int n= strlen(str);
	int mod = 0;
	int shang;
	mod = str[0]-'0';
	int nLag = 1;
	for(int i=1;i<n;i++)
	{
		mod = mod*10+str[i]-'0';
		shang = mod/13;
		if(i==1 && shang==0)
			nLag = 2;
		res[i] = '0'+shang;
		mod = mod%13;
	}
	res[n] = '\0';
	if(n<=nLag)
		my_printf("%s\n","0");
	else
		my_printf("%s\n",res+nLag);
	my_printf("%d\n",mod);
}