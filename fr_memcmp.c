/** int memcmp(const void *ptr1, const void *ptr2, size_t len)
 * 
 *  ptr1 > ptr2 양수 값 반환
 *  ptr1 < ptr2 음수 값 반환
 *  ptr1 == ptr2 0값 반환\
 * 
 *  ptr1과 ptr2의 처음부터 len까지 비교를 함
 *  이때 누가 더 큰지 판별 
 */

#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t len) {
    size_t i;
    i =0;

    const char *conv_ptr1;
    const char *conv_ptr2;
    conv_ptr1 = (char *)ptr1;
    conv_ptr2 = (char *)ptr2;

    while(i < len) {
        if(conv_ptr1[i] > conv_ptr2[i])
            return 1;
        else if(conv_ptr1[i] < conv_ptr2[i])
            return -1;
        else
            i++;

        if(i == len)
            return 0;
    }
}