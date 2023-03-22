#include <header.h>

int main_bench()
{
	char a[30000],b[30000];
	int i,j,h[30000];
	my_scanf("%s",a);
	my_scanf("%s",b);
	if(strlen(a)>=strlen(b))
	{
		    for(i=strlen(a)-1;i>=0;i--)
		    {
			j=i-(strlen(a)-strlen(b));
			if(j>=0)
			h[i]=a[i]-'0'+b[j]-'0';
			else
			h[i]=a[i]-'0';
			}
			for(i=strlen(a)-1;i>0;i--)
			{
				if(h[i]>=10)
			    {
			        h[i]=h[i]-10;
			        h[i-1]=h[i-1]+1;
		        }
				
			}
			if(h[0]>=10)
		    {
			    my_printf("1%c",h[0]+'&');
		    }
		    if(h[i]>0&&h[i]<10)
		    {
				my_printf("%c",h[0]+'0');
			}
			for(i=0;i<strlen(a);i++)
		    {
			    if(h[i]!=0)
			    break;
		    }
		    if(i==strlen(a))
		    my_printf("0");
		    else{
		    for(i=1;i<strlen(a);i++)
		    {
			    my_printf("%c",h[i]+'0');
		    }}
			
    }
    if(strlen(a)<strlen(b))
	{
		    for(i=strlen(b)-1;i>=0;i--)
		    {
			j=i-(strlen(b)-strlen(a));
			if(j>=0)
			h[i]=b[i]-'0'+a[j]-'0';
			else
			h[i]=b[i]-'0';
			}
			for(i=strlen(b)-1;i>0;i--)
			{
				if(h[i]>=10)
			    {
			        h[i]=h[i]-10;
			        h[i-1]=h[i-1]+1;
		        }
				
			}
    
	if(h[0]>=10)
		    {
			    my_printf("1%c",h[0]+'&');
		    }
		    if(h[i]>0&&h[i]<10)
		    {
				my_printf("%c",h[0]+'0');
			}
			for(i=0;i<strlen(b);i++)
		    {
			    if(h[i]!=0)
			    break;
		    }
		    if(i==strlen(b))
		    my_printf("0");
		    else{
		    for(i=1;i<strlen(b);i++)
		    {
			    my_printf("%c",h[i]+'0');
		    }
		}
		}
	return 0;
}
