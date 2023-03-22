#define NUM_ITER 11061

#include <header.h>


int cishu[26];

struct shu
{
	int num;
	char name[26];
	struct shu *next;
};

struct shu *app(int n)
{
	int i,len,j;
	struct shu *newnode ,*p, *head;
	for(i=1;i<=n;i++)
	{
		newnode=(struct shu *)malloc(sizeof(struct shu));
		my_scanf("%d %s", &newnode->num , newnode->name );
		len=strlen(newnode->name );
	
		for(j=0;j<len;j++)
		{
			cishu[newnode->name[j]-'A']++;
		}

		if(i==1)
		{
			head=newnode;
		}
		else
		{
			p->next =newnode;
		}
		p=newnode;
	}
	p->next =0;
	return head;
}

int max(void)
{
	int m=0, i ,x;
	for(i=0;i<26;i++)
	{
		if(cishu[i]>m)
		{m=cishu[i];
		x=i;}
	}
	return x;
}

int cunzai(char a[],int kk)
{
	int l,i;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]==kk+'A')
			return 1;
	}
	return 0;
}


int main_bench()
{
	int n,kk;
	struct shu *head, *p;
	my_scanf("%d",&n);

	head=app(n);
	kk=max();
	my_printf("%c\n%d\n", 'A'+kk, cishu[kk]);

	for(p=head;p!=0;p=p->next )
	{
		if(cunzai(p->name ,kk))
		{my_printf("%d\n",p->num );}
	}
	return 0;
}




	