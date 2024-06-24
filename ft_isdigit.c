/** 매개변수로 들ㅇ;ㅓ온 char 타입이 10진수 숫자로 변경 여부 판단
 * 가능하면 0이 아닌 숫자 (true)
 * 아니면 0 (false) 반환
 */

#include "libft.h"

int ft_isdigit (int n) {
    if(n >= '0' && n <= '9')
        return n;
    else
        return 0;
}