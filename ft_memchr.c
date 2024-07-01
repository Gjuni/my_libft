/** void *memchr(const void *ptr, int value, size_t len) 
 *  ptr : 가르키는 문자열
 *  value : 찾을 문자
 *  len : 범위
 * 
 * 반환값이 char *이기 때문에 main에서 사용시 형변환 캐스팅을 해주어야한다. (char *)
*/

#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t len) {
    size_t i;
    i =0;
    const char *conv_ptr;
    conv_ptr = (const char *)ptr;

    while(i < len) {
        if(conv_ptr[i] == value) {
            return (char *)&conv_ptr[i];
        }
        else
            i++;
    }
    return NULL;
}