#include <header.h>


int main_bench()
{
	char s[100],t[100];
	my_scanf("%s",s);
	my_scanf("%s",t);
	int len1,len2;
	int tag=0 ,tag1;                                                                                                                                                                     ;
	len1=strlen(s);
	len2=strlen(t);
	
	int i,j,k;
    i=0;
    
		for(j=0;j<len2;j++)
		{
			if(tag!=1)
			{
			if(s[i]==t[j])
			{   
				for(k=j+1,i=i+1;i<len1;k++)
				{   
					if(s[i]!=t[k])
					{
						i=0;
                        break;
					}                    
					else
					{
						i++;
						
						if(i==len1)
						{
							tag=1;
							tag1=k-len1+1;
						}

					}
				}
			}
			}
			else 
				break;
		}
			my_printf("%d",tag1);

	



	return 0;

		}
