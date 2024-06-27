/** int toupper (int c)
 *  대문자 변환 함수
 *  소문자만 대문자로 변경해서 반환
 */

#include "libft.h"

int ft_toupper(int c)
{
    if ('a' <= c && c <= 'z') {
        return c- ('a'-'A');
    }
    else
        return c;
}