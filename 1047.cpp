/*
1047 编程团体赛
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N;
    scanf("%d", &N);
    int score[1001] = {0};
    	for (int i = 0; i < N; i++) {
		int team;
		int num;
		scanf("%d-%d%d", &team,&num,&num);
		score[team] += num;
	}
	int max = 1;
	for (int i = 2; i < 1001; i++) {
		if (score[i] > score[max])
			max = i;
	}
	printf("%d %d", max, score[max]);
}
