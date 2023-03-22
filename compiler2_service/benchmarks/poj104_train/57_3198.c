#include <header.h>

main_bench()
{
	char s[100];
	int i,j,k,x,n;
	my_scanf("%d",&n);
	for(x=0;x<n;x++)
	{
	my_scanf("%s",s);
	k=strlen(s);
	if(s[k-1]=='r'||s[k-1]=='y')
	k=k-2;
	else if(s[k-1]=='g')
	k=k-3;
	for(i=0;i<k;i++)
	my_printf("%c",s[i]);
	my_printf("\n");
}
}