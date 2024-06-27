/** int atoi (const char *cStr)
 *  문자열을 받아서 int 타입으로 변환
 *  char * 형으로 string의 첫번째 문자의 주소값을 반환
 */

#include "libft.h"

int ft_atoi (const char *cStr) {
    size_t i;
    int result;
    int sign;

    i =0;
    result =0;
    sign = 1;

    while(cStr[i] == ' ')
        i++;
    
    while(cStr[i] == '-' || cStr[i] == '+'){
        if(cStr[i] == '-') {
            sign = -1;
            i++;
        }
        else 
            i++;
    }

     while(cStr[i] >= '0' && cStr[i] <= '9') {
        result = result *10 + (cStr[i] - '0');
        i++;
    }
    return sign * result;
}