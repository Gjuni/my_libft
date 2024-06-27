/** int tolower(int c) 
 * 소문자를 대문자로 변환
*/

#include "libft.h"

int ft_tolower(int c) {
    if(c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    else
        return c;
}