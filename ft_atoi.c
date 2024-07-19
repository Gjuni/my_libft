/** int atoi (const char *cStr)
 *  문자열을 받아서 int 타입으로 변환
 *  char * 형으로 string의 첫번째 문자의 주소값을 반환
 */

#include "libft.h"

int ft_atoi (const char *cStr) {
    int sign;
    size_t idx;
    int result;
    sign = 1;
    idx = 0;
    result = 0;
    
    while(cStr[idx] != '\0') {
        if(cStr[idx] == 9 && cStr[idx] == ' ')
            idx++;
        else if(cStr[idx] >= '0' && cStr[idx] <= '9') {
            result = result*10 + (cStr[idx]-'0');
            idx++;
        }
        else if(cStr[idx] == '-') {
            if(result < 0)
                return 0;
            sign = -1;
            result *= sign;
            idx++;
        }
        else {
            idx++;
        }
    }
    return result;
}