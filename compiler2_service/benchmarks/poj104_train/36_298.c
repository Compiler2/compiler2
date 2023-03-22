#define NUM_ITER 1075887

#include <header.h>

int main_bench()
{
	char str[5],s[1000][1000];
	char c;
	int n,i,j,k=0;
	gets(str);
	n=strlen(str);
	if(n%2==0)
		my_printf("NO\n");
	else 
	{
		if(str[(n-1)/2]!=' ')
			my_printf("NO\n");
		else
		{
			for(i=0;i<2;i++)
			{
				for(j=0;str[k]!=' ';j++)
				{
					if(str[k]!='\0')
					{
						s[i][j]=str[k];
						k++;
					}
					else break;
				}
				s[i][j]='\0';
				if(str[k]='\0')
					break;
				k++;
			}
		}
		 for(i=0;i<2;i++)
		 {
			 for(k=0;k<(n-3)/2;k++)
			 for(j=0;j<(n-3)/2-k;j++)
			 {
				 if(s[i][j]>s[i][j+1])
				 {
					 c=s[i][j];
					 s[i][j]=s[i][j+1];
					 s[i][j+1]=c;
				 }
			 }
		 }
		 if(strcmp(s[0],s[1])==0)
			 my_printf("YES\n");
		 else 
			 my_printf("NO\n");
	}
}
				


