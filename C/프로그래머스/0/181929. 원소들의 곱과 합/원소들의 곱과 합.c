#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int multiful = 1, sum = 0;
    int answer = 0;
    for (int i = 0; i < num_list_len; i++){
        sum += num_list[i];
        multiful *= num_list[i];
    }
    
    answer = (multiful > (sum*sum)) ? 0 : 1;
    return answer;
}