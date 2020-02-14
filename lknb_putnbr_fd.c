                                                            
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

void	lknb_putnbr_fd(int n, int fd)
{
	long nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		lknb_putchar_fd('-', fd);
	}
	if (nbr > 9)
		lknb_putnbr_fd(nbr / 10, fd);
	lknb_putchar_fd(nbr % 10 + '0', fd);
}
