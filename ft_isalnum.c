/** upper case 1 return
 *  lower case 2 return
 *  number     4 return
 *  None of above 0 return
*/

#include "libft.h"

int ft_isalnum(int n) {
    if (n >= 'A' && n <= 'Z')
        return 1;
    else if(n >= 'a' && n <= 'z')
        return 2;
    else if(n >= '0' && n <= '9')
        return 4;
    else
        return 0;
}