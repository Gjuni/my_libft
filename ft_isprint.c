/** 매개변수 n이 출력 가능한 문자인지, 출력할 수 없는 문자인지 판별하는 숫자
 * 출력 가능한 ASCII 문자에 해당하는 경우 1 return
 * 출력 불가능하다면 0 return
 */

/** ASCII 값을 기준으로 판별
 *      33 ~ 126 출력 가능 return 1
 *      0 ~ 32 또는 127은 출력 불가능 return 0
 */

#include "libft.h"

int ft_isprint(int n) {
    if (n >= 33 && n <= 126)
        return 1;
    else
        return 0;
}