#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> remains(N + 2, 0); // 스테이지 도달했으나 아직 클리어 X
    vector<int> reached(N + 3, 0); // 스테이지 도달 플레이어
    vector<double> fail_ratio(N + 1); // 스테이지 실패율
    vector<int> ret(N); // 스테이지 번호

    for (int stage : stages) {
        ++remains[stage]; // 도달했으나 클리어 못한 스테이지 카운팅 (실패한 거)
    }

    for (int i{N +1}; i > 0; i--) {
        reached[i] = reached[i +1] + remains[i]; // reached[i+1] = reached[i] + remains[i] 니까 저거 두개를 바꿔서 누적합 문제로 바꾼거구나 
    }

    for (int i{1}; i <= N; i++) {
        fail_ratio[i] = ((reached[i] == 0) ? 0 : 1.0 * remains[i] / reached[i]); // 도달한 사람 없으면 0 아니면 실패율 구하기 
    }

    for (int i{i}; i <=N; i++) {
        ret[i - 1] = i; // 결과 벡터에 1부터 N까지 스테이지 번호 넣기 
    }
    sort(ret.begin(), ret.end(), [&fail_ratio](int& lhs, int& rhs) { // 람다 사용 
        if (fail_ratio[lhs] == fail_ratio[rhs]) return lhs > rhs; // 실패율 같으면 낮은 번호 반환 (&써서 람다 외부의 변수 값 수정 .. )
        return fail_ratio[lhs] > fail_ratio[rhs]; // 아니면 높은 번호 반환 
    }); // C++도 람다 되는구나; 
    return ret;
}