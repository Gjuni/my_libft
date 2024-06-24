/** 아스키값인지 알려줌
 * 매개변수 값이 0 ~ 127사이의 값이라면 0이 아닌 값을 반환
 * 그 이외의 값이라면 0을 반환함
 */

#include "libft.h"

int ft_isascii (int n) {
    if (n >= 0 && n <= 127)
        return n;
    else
        return 0;
}