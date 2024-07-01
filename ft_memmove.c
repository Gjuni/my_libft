/** void *memmove(void *dest, const void *src, size_t len)
 *  void *dest = 복사 한 것을 붙여넣을 메모리 (목적지)
 * const void *src = 복사 할 메모리를 가리키는 포인터 (출발지)
 *  size_t len = 복사할 바이트 길이
 */

/** memcpy  = 그 위치에 복사해서 붙여넣기
 *  memmove = 버퍼에 복사 후 붙여넣기
 * 
 *  memmove가 안정성 측면에서 좋다
 */

// Buffer를 어떻게 만들어서 그걸 또 붙히지...?

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len) {
    size_t i;
    unsigned char *conv_src;
    unsigned char *conv_dest;
    i = 0;
    conv_dest = (unsigned char *)dest;
    conv_src = (unsigned char *)src;

    // dest가 src보다 앞에 있는 경우 : 앞에서 부터 복사
    // dest가 src보다 뒤에 있는 경우 : 뒤에서 부터 복사
    if(conv_dest > conv_src && conv_dest < conv_src+len) {
        i = len;
        while(i) {
            i--;
            conv_dest[i] = conv_src[i];
        }
    }
    else {
        while(i < len) {
            conv_dest[i] = conv_src[i];
            i++;
        }
    }

    return dest;
}