/*
정수 배열 arr을 오름차순으로 정렬해서 반환하는 solution() 함수를 완성하세요

제약 조건
 - arr의 길이는 2이상 10^5 이하
 - arr의 원소 값은 - 100,000 이상 100,000 이하
*/

#include <iostream>
#include <vector>

using namespace std;

void solution(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr;

    arr = {1, -5, 2, 4, 3};
    solution(arr);
    for (const auto &v : arr)
    {
        cout << v << " ";
    }
    cout << endl;

    arr = {2, 1, 1, 3, 2, 5, 4};
    solution(arr);
    for (const auto &v : arr)
    {
        cout << v << " ";
    }
    cout << endl;

    arr = {6, 1, 7};
    solution(arr);
    for (const auto &v : arr)
    {
        cout << v << " ";
    }
    cout << endl;
}