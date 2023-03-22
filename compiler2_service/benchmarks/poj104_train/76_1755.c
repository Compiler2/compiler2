#include <header.h>

int main_bench(){
int n,i,j,k,a,b;
struct qj{
 int a,b;
}qj[50000];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
	my_scanf("%d%d",&(qj[i].a),&(qj[i].b));
}

for(k=1;k<=n;k++)
{
  for(i=0;i<n-k;i++)
  {
	if(qj[i].a>qj[i+1].a)
	{
	  a=qj[i+1].a;
	  qj[i+1].a=qj[i].a;
	  qj[i].a=a;

b=qj[i+1].b;
	  qj[i+1].b=qj[i].b;
	  qj[i].b=b;

	}
  
  }
}

for(i=0;i<=n-2;)
{
  if(qj[i].b>=qj[i+1].a)
  {
    if(qj[i].b<qj[i+1].b)
	
	  qj[i].b=qj[i+1].b;
	
    for(j=i+1;j<n-1;j++)
	{
	  qj[j].a=qj[j+1].a;
	  qj[j].b=qj[j+1].b;
	}
	n--;
  }
  else i++; 
}
	
if(n!=1) my_printf("no");
else my_printf("%d %d",qj[0].a,qj[0].b);

return 0;
}

