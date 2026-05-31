#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while ( n > 0 ){
    if (n & 1){
        answer += n;
        n -= 2;
    }
    else {
        answer += n*n;
        n -= 2;
    }
     
    }
    
    return answer;
}