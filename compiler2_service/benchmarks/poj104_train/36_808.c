#define NUM_ITER 1050310

#include <header.h>

int main_bench()
{
	int i, j, LEN, NUM1, NUM2, tmp=0;
	char a[20], b[20];
	my_scanf("%s%s", &a, &b);
	if(strlen(a)!=strlen(b))
		my_printf("NO\n");
	else
	{
		LEN=strlen(a);
		for(i=0; i<LEN; i++)
		{
			NUM1=0;
			NUM2=0;
			for(j=0; j<LEN; j++)
				if(a[i]==a[j])
					NUM1++;
			for(j=0; j<LEN; j++)
				if(a[i]==b[j])
					NUM2++;
			if(NUM1!=NUM2)
			{
				my_printf("NO\n");
				break;
			}
			tmp++;
		}
		if(tmp==LEN)
			my_printf("YES\n");
	}
}