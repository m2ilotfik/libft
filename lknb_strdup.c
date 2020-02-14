                                                            
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

char	*lknb_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	size;

	i = 0;
	size = lknb_strlen(s1);
	if (!(s2 = lknb_strnew(size)))
		return (NULL);
	while (i < lknb_strlen(s1))
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
