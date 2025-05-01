#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n,0));
    int num = 1; //시작점
    int plusX=0; //오른쪽
    int minX=n-1; // 왼쪽으로
    int plusY=0; //위쪽
    int minY=n-1; // 아래쪽
    while(num <= n*n){
        for(int i=plusY; i<=minY; i++){
            answer[plusX][i] = num++;
        }
        plusX++; //오른쪽
        
        for(int j=plusX; j<=minX; j++){
            answer[j][minY] = num++;
        }
        minY--; //아래쪽
        
        for(int x =minY; x>=plusY; x--) //왼쪽
        {
            answer[minX][x] = num++;
        }
        minX--;
        for(int y = minX; y>=plusX; y--){
            answer[y][plusY] = num++;
        }
        plusY++;
    }
    return answer;
}