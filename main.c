

#include "libft.h"

#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[35];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");

   printf("%s", ft_strrchr(dest, 's'));

  // printf("Final destination string : |%s|", dest);
   
   return(0);
}

