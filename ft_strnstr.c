/** char *strnstr(const char *str1, const char *str2, size_t len)
 * str1에서 str2를 찾음 
 * 이때 길이 len만큼 범위를 설정함
 */

#include "libft.h"

char *ft_strnstr(const char *str1, const char *str2, size_t len) {
    size_t i;
    size_t str2_len;
    size_t str1_len;
    size_t idx;
    i =0;
    str2_len = 0;
    str1_len = 0;

    while(str2[str2_len] != '\0') {
        str2_len++;
    }
    while(str1[str1_len] != '\0') {
        str1_len ++;
    }
    if(str2_len == 0) { // exception handling
        return (char *)str1;
    }
    if(str1_len <= len) {
        len = str1_len;
    }
    while(str1[i] != '\0' && (str2_len + i) <= len){
        idx = 0;
        if(str1[i] == str2[idx]) {
            while(str1[i+idx] == str2[idx]) {
                idx++;
                if(idx == str2_len)
                    return (char *)&str1[i];
            }
        }
        i++;
    }
    return NULL;
}