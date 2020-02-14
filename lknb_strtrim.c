                                                            
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

char	*lknb_strtrim(char const *s)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	if (!s[i])
		return ("\0");
	while (s[i + j + 1] != '\0')
		j++;
	while ((s[i + j] == ' ' || s[i + j] == '\n'
				|| s[i + j] == '\t') && s[i + j])
		j--;
	if (!(trim = lknb_strnew(j + 1)))
		return (NULL);
	while (k < j + 1)
	{
		trim[k] = s[i + k];
		k++;
	}
	return (trim);
}
