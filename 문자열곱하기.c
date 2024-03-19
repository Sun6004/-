//문자열 곱하기
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int k)
{
	int myStringLen = strlen(my_string);
	int answerLen = myStringLen * k;

	char* answer = (char*)malloc((answerLen + 1));
	memset(answer, 0, (answerLen + 1));

	for (int i = 0; i < k; i++)
    {
		strcat(answer, my_string);
	}

	return answer;
}

int main()
{
	const int MAX_LENGTH = 100;
	char my_string[MAX_LENGTH];
	int k;

	scanf("%s %d", my_string, &k);

	char* answer = solution(my_string, k);
	printf("%s", answer);

	free(answer);

	return 0;
}