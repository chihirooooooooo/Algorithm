#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int box[1501][1501];
  int sum[1501][1501];
  for(int x = 0; x < 1501; x++){
    for(int y = 0; y < 1501; y++){
      box[x][y] = 0;
      sum[x][y] = 0;
    }
  }
  for(int i = 0; i < N; i++){
    int x;
    int y;
    cin >> x >> y;
    box[x][y]++;
  }
  for(int x = 1; x < 1501; x++){
    for(int y = 1; y < 1501; y++){
      sum[x][y] = sum[x][y - 1] + box[x][y];
    }
  }
  for(int y = 1; y < 1501; y++){
    for(int x = 1; x < 1501; x++){
      sum[x][y] = sum[x][y] + sum[x - 1][y];
    }
  }
  int nums;
  cin >> nums;
  int ans[nums];
  for(int i = 0; i < nums; i++){
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ans[i] = sum[x2][y2] + sum[x1 - 1][y1 - 1] - sum[x1 - 1][y2] - sum[x2][y1 - 1];
  }
  for(int i = 0; i < nums; i++){
    cout<< ans[i] <<endl;
  }
  return 0;
  
  
}
