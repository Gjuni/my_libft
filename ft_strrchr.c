/**  char *strrchr(const char *str, int c)
 *  str에서 c의 마지막 표시를 찾음 (문자로 변환됨)
 * 
 *  마지막 위치의 포인터를 반환
 *  찾지 못한 경우 NULL 반환
 * 
 * strchr 은 앞에서 찾고 strrchr은 뒤에서 부터 찾음
*/

#include "libft.h"

char *ft_strrchr(const char *str, int c) {
    size_t i;
    i =0;

    while(str[i] != '\0') {
        i++;
    }
    int idx;
    idx = i;
    while(idx >= 0) {
        if(str[idx] == (char)c) {
            return (char *)&str[idx];
        }
        else
            idx--;
    }
    return NULL;
}