#include <header.h>

int main_bench()
{
	char a[20];
	int i, j, n, t, l;
	my_scanf ("%d", &n);
	for (j=0; j<n; j++)
	{
		t = 0;
		my_scanf ("%s", a);
		l = strlen(a);
		for (i=0; i<l; i++)
		{
			if (a[0]<'A')
				t++;
			if (a[i]<'0')
				t++;
		    if (a[i]>'9' && a[i]<'A')
			    t++;
			if (a[i]>'Z' && a[i]<'_')
			    t++;
			if (a[i]>'_' && a[i]<'a')
			    t++;
			if (a[i]>'z')
			    t++;
		}
		if (t == 0)
			my_printf ("yes\n");
		else
			my_printf("no\n");
	}
	return 0;
}
