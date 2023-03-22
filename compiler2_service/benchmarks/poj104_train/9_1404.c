#include <header.h>

int main_bench()
{
	struct patient{char id[10];int a;}patients[100];
	struct old{char ido[10];int ao;}olds[100];
	struct young{char idy[10];int ay;}youngs[100];
	int n,y=0,o=0,so=0,sy=0,e;
	my_scanf("%d",&n);
	char f[10];
	for(int j=0;j<n;j++)
	{
		my_scanf("%s",patients[j].id);
		my_scanf("%d",&patients[j].a);
		if(patients[j].a<60)
		{
			strcpy(youngs[y].idy,patients[j].id);
			youngs[y].ay=patients[j].a;
			y++;
		}
		if(patients[j].a>=60)
		{
			strcpy(olds[o].ido,patients[j].id);
			olds[o].ao=patients[j].a;
			o++;
		}
	}
		for(int r=o-1;r>0;r--)
		{
			for(int i=0;i<r;i++)
			{
				if(olds[i].ao<olds[i+1].ao)
				{
					e=olds[i+1].ao;
					olds[i+1].ao=olds[i].ao;
					olds[i].ao=e;
					strcpy(f,olds[i+1].ido);
					strcpy(olds[i+1].ido,olds[i].ido);
					strcpy(olds[i].ido,f);
				}
			}
		}
		for(int l=0;l<=o-1;l++)
		{
			my_printf("%s\n",olds[l].ido);
		}
		for(int m=0;m<=y-1;m++)
		{
			my_printf("%s\n",youngs[m].idy);
		}
	return 0;
}

