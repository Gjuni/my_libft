/** char *strdup(const char *string)
 * 복사된 데이터의 주소를 리던하고 에러가 발생시 NULL 반환
 */

#include "libft.h"

char *ft_strdup(const char *str) {
    size_t i;
    size_t idx;
    i = 0;
    idx = 0;

    while(str[i] != '\0')
        i++;

    char *newstr = (char *)malloc(sizeof(char) * (i+1));

    if(newstr == NULL)
        return NULL;
        
    while(idx < i) {
        newstr[idx] = str[idx];
        idx++;
    }
    newstr[i] = '\0';

    return newstr;
}