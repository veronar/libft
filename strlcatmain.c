#include "libft.h"
#include <stdio.h>
#include <string.h>


size_t
ft_strlcat(char * restrict dst, const char * restrict src, size_t maxlen) {
    const size_t srclen = ft_strlen(src);
    const size_t dstlen = ft_strnlen(dst, maxlen);
    if (dstlen == maxlen)
	{	
		printf("%s\n", dst);
		return maxlen+srclen;
	}
    if (srclen < maxlen-dstlen) {
        ft_memcpy(dst+dstlen, src, srclen+1);
    } else {
        ft_memcpy(dst+dstlen, src, maxlen-1);
        dst[dstlen+maxlen-1] = '\0';
    }
	printf("%s\n",dst);
    return dstlen + srclen;
}

int main()
{
    const char    *src = "H";
    char    dst[14] = "World";
    
    printf("%zu",strlcat(dst, src, 8));
    return 0;
}
