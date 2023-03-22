#include <header.h>


int main_bench()
{
	int n,len,max=1,cnt,num,sofar=1;
	char tmp,c[501],gram[5],maxc[250][5];
	int i,j,k;
	my_scanf("%d",&n);
	gram[n]='\0';
	tmp=getchar();
	gets(c);
	len=strlen(c);
	for (i=0;i<=len-n;i++)
	{
		for (j=0;j<n;j++) gram[j]=c[i+j];
		cnt=1;
		for (j=i+1;j<=len-n;j++)
		{
			if (c[j]==gram[0])
			{
				num=0;
				for (k=1;k<n;k++)
				{
					if (c[j+k]!=gram[k]) {num++;break;}
				}
				if (num==0) cnt++;
			}
		}
		if (cnt>max) {max=cnt;strcpy(maxc[0],gram);sofar=1;}
		else if (cnt==max) {sofar++;strcpy(maxc[sofar-1],gram);}
	}		
	if (max==1) my_printf("NO\n");
	else
	{
		my_printf("%d\n",max);
		for (j=0;j<sofar;j++)
		{
			for (k=0;k<n;k++) my_printf("%c",maxc[j][k]);	
			my_printf("\n");
		}
	}
		
		
	return 0;
}