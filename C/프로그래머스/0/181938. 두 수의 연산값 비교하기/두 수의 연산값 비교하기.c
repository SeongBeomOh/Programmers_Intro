#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int solution(int a, int b) {
    int answer = 0;
    int ab = 0, ab_twice = 0;
    ab = a*pow(10,(int)(log10(b))+1)+b;
    ab_twice = 2*a*b;
    answer = (ab_twice > ab) ? ab_twice : ab;
    
    return answer;
}