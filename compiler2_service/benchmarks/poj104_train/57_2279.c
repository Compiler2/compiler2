#include <header.h>

int main_bench()
         {
         char p[50];
         int n,i=1;
         int l;

         my_scanf("%d",&n);
         while(i<n+1)
                    {


                                   my_scanf("%s",p);

                                   l=strlen(p)-1;

                                   if(p[l]=='y')
                                   p[l]=p[l-1]='\0';

                                   if(p[l]=='r')
                                   p[l]=p[l-1]='\0';

                                   if(p[l]=='g')
                                   p[l]=p[l-1]=p[l-2]='\0';

                          my_printf("%s\n",p);
                          i++;
                     }
         return 0;
         }
