/** 알파벳인지 판별해주는 함수
 *  매개변수(int) 가 들어감
 *      알파벳이 아니라면 0
 *      upper case 는 1
 *      lower case 는 2  를 반환
 */

#include "libft.h"

int ft_isalpha(int n) {
    if (n >= 'a' && n <= 'z')
        return 2;
    else if(n >= 'A' && n <= 'Z')
        return 1;
    else
        return 0;
}