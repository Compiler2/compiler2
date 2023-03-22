#define NUM_ITER 810409

#include <header.h>

  
int main_bench()
{
	char s[100],zfc[100][100],a[100],b[100];
    gets(s);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int n=strlen(s);
	int i=0,j,k=0;
    for(j=0;j<=n;j++){
		if(s[j] == ' ' ||s[j] == ',' ||s[j] =='\0')
		{
			if(k != 0)
			{
				zfc[i][k] = '\0';
			    i++;
			}
			k=0;
		}
		else
		{
			zfc[i][k] = s[j];
			k++;
		}
	}
	for(j=0;j<i-1;j++)
	{
   if(strcmp(zfc[j],a)==0)
	  strcpy(zfc[j],b);
	my_printf("%s ", zfc[j]);}
	if (strcmp(zfc[j],a) == 0)
	{
		strcpy(zfc[j],b);
	}
	my_printf("%s\n", zfc[j]);	
    return 0;
}

 
 
 
