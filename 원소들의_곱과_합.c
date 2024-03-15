#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int sum = 0;
    int multi = 1;

    if(num_list_len < 11) {
        for(size_t i = 0; i < num_list_len; i++) {
            sum += num_list[i];
            multi *= num_list[i];
        }
        if(multi < sum * sum) {
            answer = 1;
        } else {
            answer = 0;
        }
    } else {
        return false;
    }
    return answer;
}

