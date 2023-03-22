#include <header.h>

main_bench()
{
	int i,j,k,cont=0;
	char s1[100],s2[100];
	my_scanf("%s %s",s1,s2);
	for(i=0;s1[i]!='\0';)
		i++;
	for(k=0;s2[k]!='\0';)
		k++;
	if(i!=k)
		my_printf("NO");
	else
	{
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				if(s1[i]==s2[j])
				{
					cont++;
					break;
				}
			}
		}
		if(cont==k)
			my_printf("YES");
		else
			my_printf("NO");
	}
}