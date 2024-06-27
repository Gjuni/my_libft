/** void bzero (void *s, size_t n);
 *  s는 초기화를 진행할 포인터이다
 *  s부터 n byte만큼 초기화를 진행한다
 * 
 * 즉 bzero(void *s, size_t) == memset(void *s, 0, size_t n) 동일
 * 
 * s는 함수 내에서 unsigned char의 형태로 캐스팅되어 사용
 */

#include "libft.h"

void ft_bzero(void *s, size_t n) {
    unsigned char *conv_s;
    size_t i;

    conv_s = (unsigned char *)s; // 형 변환을 다른 변수에서 해주는 이유는 만약 s를 unsigned char로 그대도 사용시
    i = 0;                          // 다른 코드에서 s를 사용할 때 혼동을 불러올 수 있어 캐스팅해서 사용한다.

    while(i < n) {
        conv_s[i] = 0;
        i++;
    }
}