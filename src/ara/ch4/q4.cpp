// 문자열 선언 및 초기화
#include <iostream>
#include <string> 
using namespace std;

int main(){
  // 선언 및 초기화
  string str1; // 빈 문자열
  string str2="Hello,World!";
  string str3(str2); // 문자열 복사 
  string str4(str2,0,5); // 0~5까지 부분 복사
  string str5(10,'*'); // 10개의 * 
  cout << str1 << endl;
  cout << str2 << endl;     
  cout << str3 << endl;
  cout << str4 << endl;
  cout << str5 << endl;
  // 문자열 찾기
  string str6 ="Hello, C++ Programming!";
  // 문자 열 찾기
  size_t pos1 = str6.find("Hello");
  cout << pos1 << endl; // 0 -> pos 처음 찾은 위치 반환
  // 문자 찾기
  size_t pos2 = str6.find('C');
  cout << pos2 << endl; // 7 -> pos 처음 찾은 위치 반환
  
  // 시작 인덱스 지정 문자열 찾기 + 존재하지 않는 문자열 찾기
  size_t pos3 = str6.find("Hello",2); // 0에서 시작하지 않아서 찾지 못함
  cout << pos3 << endl; // npos -> 찾지 못했을 때 반환 값
  size_t pos4 = str6.find("Java"); // 존재하지 않는 문자열
  cout << pos4 << endl; // npos -> 찾지

  // 문자열 추가,수정
  string str7="ARA";
  str7+="land";
  cout << str7 << endl; // ARAland
  str7[1]='L';
  cout << str7 << endl; // ALAland
  str7.replace(0,3,"Sora");
  cout << str7 << endl; // Soraland
  str7.append(" is my sister.");
  cout << str7 << endl; // Soraland is my sister.
  return 0;
}