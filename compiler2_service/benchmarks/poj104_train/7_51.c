#define NUM_ITER 812882

#include <header.h>


int main_bench()
{
   char str[256],a[256],b[256],tmp[256];
   int i,lenstr,lena;
   char *pstr;
   gets(str);
   gets(a);
   gets(b);
   lenstr=strlen(str);
   lena=strlen(a);

   for(i=0;i<=lenstr-lena;i++)
   {
      pstr=&str[i];
      strncpy(tmp,pstr,lena);
      tmp[lena]='\0';
      
      if(strcmp(tmp,a)==0)
      {
         str[i]='@';
         break;
      }
   }

   for(i=0;i<lenstr;i++)
   {
      if(str[i]=='@')
      {
        my_printf("%s",b);
        i=i+lena-1;
      }
      else my_printf("%c",str[i]);
   }
   my_printf("\n");

  return 0;
}

