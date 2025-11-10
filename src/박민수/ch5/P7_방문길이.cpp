#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

int solution(string dirs) {
    int answer = 0;

    int nx = 0;
    int ny = 0;
    int x = 0;
    int y = 0;

    set<pair<pair<int, int>, pair<int,int>>> visit;

    for (auto i : dirs) {
        printf("%c", i);
        if (i == 'U' && y < 5) {
            ny = y + 1;
        }
        else if (i == 'D' && y > -5) {
            ny = y - 1;
        }
        else if (i == 'L' && x > -5) {
            nx = x - 1;
        }   
        else if (i == 'R' && x < 5){
            nx = x + 1;
        }

        if (nx != x || ny != y) {
            pair<int, int> f = {nx, ny};
            pair<int, int> s = {x, y};
            visit.insert({f, s});
            visit.insert({s, f});
            x = nx;
            y = ny;
        }
    }

    answer = visit.size()/2;
    
    return answer;
}

int main() {
    const char * a = "LULLLLLLU";
    printf("%d", solution(a));
}