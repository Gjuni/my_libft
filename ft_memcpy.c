/** void *memcpy (void *dest, const void *source, size_t num)
 *  void *dest = 복사 받을 메모리 자리
 *  void *source = 복사할 메모리를 가르키고 있는 포인터
 *  size_t num = 복사할 데이터 길이
 */

/** source의 메모리에 있는 값들을 num 길이만큼 dest에 복사해서 붙혀넣는 함수 
 * 전체 복사시 len +1 에 유의한다 문자열 끝의 NULL문자까지 복사
*/

/** 만약 붙여넣기 할 배열(source)의 크기가 복사할 크기(len)보다 작다면 할당된 메모리보다 더 읽으니 프로그램이 비정상적으로 활동하게 됨*/

#include "libft.h"

void *ft_memcpy(void *dest, const void *source, size_t len) {
    size_t i;
    unsigned char *conv_source;
    unsigned char *conv_dest;

    conv_dest = (unsigned char *)dest;
    conv_source = (unsigned char *)source;
    i = 0;

    while(i < len) {
        conv_dest[i] = conv_source[i];
        i++;
    }

    return (void *)conv_dest;
}
