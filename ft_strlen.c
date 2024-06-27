/**  strlen (const char * str)
 *      const char* 타입의 문자열을 받아서 해당 문자열의 길이를 반환하는 함수
 *      문자열 끝은 항상 "\0" "NULL" 문자
 *  즉 char* 가 가리키는 주소에서 부터 시작해서 "\0" 문자가 나올 때까지의 문자들의 개수 파악
 */

/** size_t를 사용한 이유
 *  int는 -128~ 127까지의 범위를 가지지만 여기서
 * size_t를 사용하게 된다면 음수에 있는 범위를 양수까지 끌어다가 사용 가능하기 때문에 메모리를 더 절약할 수 있다
 * 
 * 길이는 음수가 나오지 않기에 size_t를 사용하는 것이 메모리 상 더 효율 적이다.
 * 반면 음수가 존재하는 형일 경우 size_t를 사용하게 된다면 계산 결과가 나오지 않는다.
 */


#include "libft.h"

int ft_strlen(const char *str) {
    size_t idx;
    idx = 0;
    
    while (str[idx] != '\0') {
        str[idx++];
    }
    return idx;
}