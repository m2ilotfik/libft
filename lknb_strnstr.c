                                                            
                            ,**************,.               
                        ,***********************.           
                      ****************************,         
               .... ********************************        
          .,*****************************************       
        ,******/*****/*********//*****///***//********      
       ,,,,***%@%**/&@#*******(@@***(&@&/**/&@/*******      
      ,,,,,,,,%@%**/&@#*******(@@*/&@&/****/&@/*******      
   .,,,,,,,,,,%@%*,/&@#*******(@@%&@#******/&@/*********,   
  .,,,,,,,,,,,%@%*,/&@#,,*****(@@**#@&/****/&@/**********,  
  ,,,,,,,,,,,,%@%*,/&@@&&&&&/*(@@***/%@&(**/&@/***********. 
   ,,,,,,,,,,,***,,**********,*********//***//***********.  
     .,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*****************,.  

#include "libft.h"

char	*lknb_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && i < (int)n)
	{
		j = 0;
		while (s2[j] == s1[i + j] && (i + j) < (int)n)
		{
			j++;
			if (s2[j] == '\0')
				return (&((char*)s1)[i]);
		}
		i++;
	}
	return (NULL);
}
