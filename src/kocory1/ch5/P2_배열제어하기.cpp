/*
정수 배열 lst가 주어진다. 배열의 중복값을 제거하고, 내림차순으로 정렬해서 반환하는 solution()함수를 구현하세요
제약 조건
 - lst의 길이는 2 이상 1,000 이하
 - lst의 원소 값은 -100,000 이상 100,000 이하
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lst)
{
    sort(lst.rbegin(), lst.rend());
    auto it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    return lst;
}

int main()
{
    vector<int> lst;

    lst = {4, 2, 2, 1, 3, 4};
    lst = solution(lst);
    for (auto i : lst)
    {
        cout << i << " ";
    }
    cout << endl;

    lst = {2, 1, 1, 3, 2, 5, 4};
    lst = solution(lst);
    for (auto i : lst)
    {
        cout << i << " ";
    }
    cout << endl;
}