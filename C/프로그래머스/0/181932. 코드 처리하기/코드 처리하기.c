#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int mode = 0;
    char temp[2] = { 0 };
    int len = strlen(code);
    char* answer = (char*)malloc(strlen(code) + 1);
    if (answer == NULL) {
        return NULL;
    }
    answer[0] = 0;
    for (int idx = 0; idx < len; idx++) {
        if (code[idx] == '1') {
            mode = !mode;
            continue;
        }
            
        if (mode) {
            if (idx & 1) {
                temp[0] = code[idx];
                temp[1] = 0;
                answer = strcat(answer, temp);
            }

        }

        else {
            if (!mode) {
                if (!(idx & 1)) {
                    temp[0] = code[idx];
                    temp[1] = 0;
                    answer = strcat(answer, temp);
                }

            }

        }
    }
    
    if (strlen(answer) == 0) {
        free(answer);
        char* empty_res = (char*)malloc(6);
        strcpy(empty_res, "EMPTY");
        return empty_res;
    }
    return answer;
}
