/** size_t strlcat(char *dest, const char *src, size_t len)
 *      dest : src 앞에 있는 문자열
 *      src : dest 뒤에 붙을 문자열
 *      len : 우리가 원하는 문자열 길이
 */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t len) {
    size_t dest_len;
    size_t src_len;
    size_t append;

    dest_len =0;
    src_len = 0;
    append =0;
    while(dest[dest_len] != '\0')
        dest_len++;
    while(src[src_len] != '\0')
        src_len++;

    if(dest_len >= len)
        return dest_len+src_len;
    else if(dest_len < len){
        while(append < len-dest_len-1){ // Expect for Null
            dest[dest_len-1+append] = src[append];
            append++;
        }
    }
    dest[dest_len+append] = '\0';
    
    return dest_len + src_len;
}