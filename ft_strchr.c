/** char *strchr(const char *str, int c)
 *  char *str : 검색할 문자열
 *  int c : 존재하는지 확인할 문자 (아스키값)
 */

#include "libft.h"

char *ft_strchr(const char *str, int c) {
    size_t i;
    i =0;

    while(str[i] != '\0') {
        if((char)c == str[i]) {
            return (char *)&str[i]; // str[i] 번째 값을 반환하기 위해 & 사용 // 함수값이 char *이기에 반환 값도 그에 맞게 반환을 진행
        }
        else if(c != str[i]) {
            i++;
        }
    }
    return NULL;
}