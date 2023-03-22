#define NUM_ITER 919834

#include <header.h>

int main_bench()
{
	char a[100]={""},b[100]={""};
	int lena;
	int lenb;
	int i,j;
	int flag;

	my_scanf("%s%s",a,b);
	
	lena=strlen(a);
    lenb=strlen(b);

    if(lena==lenb)
	{
		for(i=0;i<lena;i++)
	    {
			flag=0;
			for(j=0;j<lenb;j++)
		    {
				if(a[i]==b[j])
				{
					a[i]='0';
				    b[j]='0';
					flag=1;
				    break;
			    }
		    }
			
	    }
		if(strcmp(a,b)==0)my_printf("YES\n");
		else my_printf("NO\n");
	}
	else my_printf("NO\n");
}