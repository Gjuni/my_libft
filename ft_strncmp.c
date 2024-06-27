/**  int strncmp(const char *str1, const char *str2, size_t n)
 *      비교할 문자열  str1, str2
 *      비교할 문자열 길이 n
 * 
 *      n의 범위가 중요
 *      str1, str2 문자열보다 큰 값을 넣게 되면 알아서 문자열 전체를 비교
 *      
 *      str1 < str2 인 경우 음수 반환
 *      str1 > str2 인 경우 양수 반환
 *      str1 == str2 인 경우 0을 반환
*/

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t len) {
    
}