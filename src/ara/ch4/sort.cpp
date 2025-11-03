# include <iostream>
# include <vector>  
# include <algorithm>
using namespace std;

 // sort 인수3개
struct Point{
    int x;
    int y;
    Point(int x, int y):x(x),y(y){}
};
bool compare(const Point &a, const Point &b){
    if(a.x==b.x) return a.y<b.y; // x가 같으면 y 기준 오름차순
    return a.x<b.x; // x 기준 오름차순
}
  
int main(){
  //sort(시작반복자,끝 반복자)
  //sort(시작반복자, 끝반복자,비교함수) => 비교 함수를 기준으로 범위 내 원소를 정렬하는 것
  // O(nlogn)
  std::vector<int> v={4,2,5,1,3};
  sort(v.begin(),v.end()); // 오름 차순
  sort(v.rbegin(),v.rend()); // 내림 차순

  vector<Point> points={{2,3},{1,2},{2,2},{1,3}};
  sort(points.begin(),points.end(),compare);
  for (const auto&p:points){
    cout<<"("<<p.x<<","<<p.y<<") ";
  }
  cout<<endl;
  return 0;


}