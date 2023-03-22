#include <header.h>

struct {
int num;
char w[26];

}book[999],test[1];



int main_bench()
{  
   int m,i,j,n,s;
   char x,c;
   my_scanf ("%d",&m);
   for (i=0;i<m;i++)
   {
   my_scanf ("%d%s",&book[i].num,book[i].w);
   
   
   }

   x='A';
   n=0;
   c='A';
   while (1)
   {
    s=0;
   for (i=0;i<m;i++)
   {
    for (j=0;j<strlen(book[i].w);j++)
	{
	 if (book[i].w[j]==x)
	 {s++;}
	
	
	}
   }
   
   if (s>n)
   {
   n=s;
   c=x;
   }
   if (x=='Z') {break;}
   x++;
   }
   my_printf ("%c\n%d\n",c,n);
   for (i=0;i<m;i++)
   {
    for (j=0;j<strlen(book[i].w);j++)
	{
	 if (book[i].w[j]==c)
	 {
		 my_printf ("%d\n",book[i].num);
		
	 }
	
	
	}
   }
	return 0;
}

