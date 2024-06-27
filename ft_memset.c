/** 메모리의 내용을 원하는 크기만큼 특정 값으로 세팅할 수 있는 함수 
 * void *memset(void *ptr, int value, size_t num);
 * 
 * *ptr은 세팅하고자 하는 메모리의 시작 주소
 * value는 메모리에 세팅하고자 하는 값을 집어넣음
 * size_t num은 길이
 * 
 * char 형 value를 char가 들어왔을 경우 unsigned char로 변형시켜 해당 길이 값에 대입시킴
 * int 형일 때 0또는 -1이 아닌 경우 까다롭다. int는 4byte이기 때문에 unsigned char로 변형 경우 1byte로 바뀌게 된다.
 * 그럴 경우 배열에 이상하게 값이 들어가게 된다. 4byte 당 값을 변환하고 싶었지만 1byte로 값이 변환하게 되는 불상사가 발행하여
 * 
 * memset은 0, -1 또는 변환하고 싶은  char형만을 사용한다
*/

/** size_t와 unsigned char의 차이점
 *  size_t 자료형은 해당 시스템에서 포함할 수 있는 최대 크기의 데이터를 정의
 * OS(운영체제)에서 32 bit에서는 4byte의 부호 없는 자료형, 64 bit에서는 8 byte의 부호 없는 자료형
 * 하지만 unsigned int 32, 64비트 운영체제마다 정의되있지 않기 때문에 사용 불가
 * 
 * size_t는 형 변환 시 signed를 unsigned로 변환하기 때문에 음수 부분을 양수로 변환시켜 사용한다.
 */

#include "libft.h"

void *ft_memset(void *ptr, int value, size_t len) { // 문자열 길이는 양수만 존재하기에 size_t를 사용할 수 있다
    unsigned char *conv_ptr;
    size_t i;

    value = (unsigned char)value; // value값은 unsigned char로 형 변환
    conv_ptr = (unsigned char *)ptr; // 기존 주소 변경 없이 conv_ptr이 ptr을 가르키게 마듬
    i = 0;

    while(i < len) {
        conv_ptr[i] = value;
        i++;
    }
    return (void *)conv_ptr; // 함수 자체적으로 void*로 받았기에 코드의 편의성과 유연성을 위해 void*로 반환해주는 것이 바람직하다.
}