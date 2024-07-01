/** void *calloc(size_t elt_count, size_t elt_size)
 *      elt_size크기의 변수를 elt_count 개 만큼 저장할 수 있는 메모리 공간을 할당하는 의미
 */

/** malloc 과 calloc의 차이점
 *      malloc은 할당괸 공간의 값을 바꾸지 않는다
 *      calloc은 할당된 공간의 값을 모두 0으로 바꾼다
 * 
 *      배열을 할당하고 모두 0으로 초기화
*/

#include "libft.h"

void *ft_calloc(size_t elt_count, size_t elt_size) {
    void *convert = (void *)malloc(elt_size * elt_count);

    if(convert == NULL) { // excpetion handling
        return NULL;
    }

    int *ptr;           // 형변환
    ptr = (int *)convert;

    while(elt_count) {
        *ptr++ = 0;
        elt_count--;
    }
    return convert;
}