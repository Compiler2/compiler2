#define NUM_ITER 746048

#include <header.h>

int main_bench()
{
	int temp=0,a,b,k,i,o,p,j;
	char c[40],s[40];
	my_scanf("%d%s%d",&a,c,&b);
	k=strlen(c);
	for(i=0;i<k;i++)
	{
		if(c[i]>='a'&&c[i]<='z')
			temp=a*temp+10+c[i]-'a';
		else if(c[i]>='A'&&c[i]<='Z')
			temp=a*temp+10+c[i]-'A';
		else if(c[i]>='0'&&c[i]<='9')
			temp=a*temp+c[i]-'0';
	}
	if(temp<b)
	{
		if(temp<=9)
		my_printf("%c",temp+'0');
		else
			my_printf("%c",temp-10+'A');
	}
	else
	{
		for(p=0;;p++)
		{
	
		o=temp%b;
		if(o<=9)
		s[p]=o+'0';
		else
			s[p]=o-10+'A';
		temp=temp/b;
		if(temp<b)
			break;
		
		}
    
	
	if(temp<=9)
	s[p+1]=temp+'0';
	else
		s[p+1]=temp-10+'A';
	for(j=0;j<=p+1;j++)
	{
		my_printf("%c",s[p+1-j]);
	}
	}
	my_printf("\n");
}
