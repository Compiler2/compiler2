#define NUM_ITER 853971

#include <header.h>

int main_bench()
{
    int i,j=0,m=0;
    char a[100],b[100],c[100];
    gets(a);
    my_scanf("%s%s",b,c);

    for(i=0;;i++)
    {  
          while(1)
          {
		
				
                if(a[i+j]==b[j]&&a[i+j]!='\0')
               
                {
                     j++;
                   continue;
                }
                 else if(b[j]=='\0'&&(a[i+j]==' '||a[i+j]=='\0')&&(a[i-1]==' '||i==0))
                 {
                      j=0;
                      my_printf("%s",c);
                      i+=strlen(b)-1;
                      break;
                      }
                  else
                {
                  j=0;
				  if(a[i]=='\0')
					  break;
               else    my_printf("%c",a[i]);
                  break;
                    }
                 }

		  if(a[i]=='\0')
			 break;

                         
    }
if(b[j]=='\0')
                      my_printf("%s",c);
                



    return 0;
}