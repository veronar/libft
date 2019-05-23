

#include "libft.h"

#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[35];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");

   printf("%zu", strlcat(dest, src, 35));

   //printf("Final destination string : |%zu|", dest);
   
   return(0);
}

