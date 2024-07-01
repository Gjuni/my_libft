/**  size_t strlcpy(char *dest, const char *src, size_t len)
 *      dest : 복사가 진행될 목적지 이다.
 *      src : 우리가 복사를 해야하는 값이 들어있는 포인터.
 *      size : 복사를 진행하는 크기
 * 
 *    중요! \0 문자와 함께 저장된다
*/

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t len) {
    size_t i;
    size_t src_len;
    i =0;
    src_len =0;
    while(src[src_len] != '\0') {
        src_len++;
    }
    if(len == 0){
        return src_len;
    }
    while(src[i] != '\0' && i < len-1) { // Null 값 포함이므로 len보다 작아야함
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return src_len;
}