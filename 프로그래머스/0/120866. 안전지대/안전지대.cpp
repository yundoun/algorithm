#include <string>
#include <vector>

using namespace std;

// 자기 자신 포함 9방 탐색 
int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1 };
int dy[] = {-1, 0, 1, -1, 0, 1, -1 ,0 ,1 };
 

int solution(vector<vector<int>> board) {
    int answer = 0;
    
    int n = board.size();
    
    for (int i =0; i<n; i++){
        for (int j=0; j<board[i].size(); j++){
            if (board[i][j] == 1){
                board[i][j] = 2;
                answer++;
                
                for (int k = 0; k<9; k++){
                    int x_dx = i +dx[k];
                    int y_dx = j+dy[k];
                    if ((-1 < x_dx && x_dx < n)
                        && (-1 <y_dx && y_dx<n)
                        && (board[x_dx][y_dx] == 0)){
                        board[x_dx][y_dx] = 2;
                        answer++;
                    }
                }
            }
        }
    }
    
    return n*n - answer;
}