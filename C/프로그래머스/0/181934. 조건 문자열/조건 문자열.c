#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = 0;
    int ineq_len = strlen(ineq);
    int eq_len = strlen(eq);
    char* simbol = (char*)malloc(ineq_len+eq_len +1);
    if (simbol == NULL) {
        return NULL;
    }
    strcpy(simbol, ineq);
    strcat(simbol, eq);

    if (strcmp(simbol,"<=") == 0) {
        answer = (n <= m) ? 1 : 0;

    }
    else if (strcmp(simbol, ">=") == 0) {
        answer = (n >= m) ? 1 : 0;
    }
    else if (strcmp(simbol, "<!") == 0) {
        answer = (n < m) ? 1 : 0;
    }
    else if (strcmp(simbol, ">!") == 0) {
        answer = (n > m) ? 1 : 0;
    }

    free(simbol);

    return answer;
}