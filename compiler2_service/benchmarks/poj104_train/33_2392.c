#define NUM_ITER 23963

#include <header.h>



int main_bench()
{char a[256],b[256];
int i,j,n,k,l;
my_scanf("%d\n",&n);

for(i=0;i<n;i++)
{ 
my_scanf("%s",&a);
l=strlen(a);
for(j=0;j<l;j++)
{if (a[j]=='A')
b[j]='T';
else if (a[j]=='T')
b[j]='A';
else if (a[j]=='C')
b[j]='G';
else if (a[j]=='G')
b[j]='C';
else
break;
}


for(k=0;k<l;k++)
{my_printf("%c",b[k]);
}my_printf("\n");
}

return 0;
}
