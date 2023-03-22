#include <header.h>

int main_bench(){
   double n;
   char  a[500],b[500];
   my_scanf("%lf",&n);
   my_scanf("%s",a);
   my_scanf("%s",b);
   int len1=strlen(a),len2=strlen(b);
   int i,j=0;
   double t;
   for(i=0;i<len1;i++)
   {
	   if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')
	   {
		   my_printf("error");
		   goto  q;
	   }
   }
   for(i=0;i<len2;i++)
   {
	   if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')
	   {
		   my_printf("error");
		   goto q;
	   }
   }
   if(len1!=len2)
   {
	   my_printf("error");
	   goto q;
   }
   if(len1==len2)
   {
   for(i=0;i<len1;i++)
   {
	   if(a[i]==b[i])
	   {
		   j++;
	   }
   }
   t=1.0*j/len1;
   if(t>n)
   {
	   my_printf("yes");
   }
   else{
	   my_printf("no");
   }
   }
   else
   {
	   my_printf("no");
   }
q:	return 0;
}