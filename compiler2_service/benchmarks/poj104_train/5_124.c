#define NUM_ITER 799311

#include <header.h>

int main_bench()
{
    float x,fenzi=0;
    int lena,lenb,i,j=0;
    char a[505],b[505],ch;
    my_scanf("%f",&x);
    my_scanf("%c",&ch);
    gets(a);

    gets(b);
 
    lena=strlen(a);
    lenb=strlen(b);
    if(lena!=lenb)
    my_printf("error\n");
    else
    {
    	 for(i=0;i<lena;i++)
    	 {
    	      if((a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')&&
    	      (b[i]=='A'||b[i]=='T'||b[i]=='G'||b[i]=='C'))
    	        {
    		    if(a[i]==b[i]) fenzi++;
    	        }
    	      else {j=1;my_printf("error\n");break;}
    	 }
         if(j==0&&fenzi>=x*lena) my_printf("yes\n");
         else if(j==0) my_printf("no\n");
    }
    		
}