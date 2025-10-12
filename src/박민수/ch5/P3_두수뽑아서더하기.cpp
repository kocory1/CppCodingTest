/*
정수 배열 numbers가 주어진다. numbers에서 서로 다른 인덱스에 있는 2개의 수를 뽑아 만들 수 있는 모든 수를
배열에 오름차순으로 담아 반환하는 solution() 함수를 완성하시오
제약조건
 - numbers의 길이는 2이상 100이하
 - numbers의 모든 수는 0이상 100 이하
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {

    vector<int> result;
    for (int i = 0 ; i < numbers.size(); i++) {  //n 
        for (int j = i+1; j < numbers.size(); j++) { // n
            result.push_back(numbers.at(i) + numbers.at(j)); //1 
        }
    }
    sort(result.begin(),result.end());
    auto it = unique(result.begin(), result.end());
    result.erase(it, result.end());
    return result; // -> n^2?
    
}

int main() {
    vector<int> numbers1 = {2,1,3,4,1};
    auto result1 = solution(numbers1);

    for (auto i : result1) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> numbers2 = {5,0,2,7};
    auto result2 = solution(numbers2);

    for (auto i : result2) {
        cout << i << " ";
    }
    cout << endl;
}