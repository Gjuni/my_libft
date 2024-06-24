/**  strlen (const char * str)
 *      const char* 타입의 문자열을 받아서 해당 문자열의 길이를 반환하는 함수
 *      문자열 끝은 항상 "\0" "NULL" 문자
 *  즉 char* 가 가리키는 주소에서 부터 시작해서 "\0" 문자가 나올 때까지의 문자들의 개수 파악
 */


#include "libft.h"

int ft_strlen(const char *str) {
    int idx = 0;

    while (str[idx] != '\0') {
        str[idx++];
    }
    return idx;
}