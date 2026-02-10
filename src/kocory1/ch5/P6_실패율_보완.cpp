#include <string>
#include <vector>
#include <algorithm>
using namespace std;



vector<int> solution(int N, vector<int> stages) {
    vector<int> answer(N);
    vector<float> chall(N, 0.0);
    vector<float> fail(N, 0.0);
    vector<float> failRatio(N);

    for (auto stage : stages) {
        if (stage < N+1) fail[stage-1]++;
    } // 스테이지 별 fail 수 측정

    int player_num = stages.size();

    for (int i = 0; i< fail.size(); i++) { // i번째 도달한 사람 수 = i-1번째 도달한 사람 수 - i-1에서 실패한 사람 수 
        chall[i] = player_num; 
        player_num -= fail[i];
    }


    for (int i = 0; i < N; i++) {
        failRatio[i] = ((chall[i] == 0 ? 0 : fail[i] / chall[i])); // ratio 담고 
        answer[i] = i; // answer에 문제 담고
    }

    sort(answer.begin(), answer.end(), [&failRatio](int &lhs, int &rhs){
        if (failRatio[lhs] == failRatio[rhs]) return lhs < rhs;
        return failRatio[lhs] > failRatio[rhs];
    });

    for (int i = 0; i < N; i++) {
        ++answer[i];
    }

    return answer;
}   