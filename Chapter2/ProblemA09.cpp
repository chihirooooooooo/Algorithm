#include <iostream>
using namespace std;

int main(){
  int H, W, N;
  cin >> H >> W >> N;
  int diff[H + 1][W + 1];
  for(int i = 0; i < H + 1; i++){
    for(int k = 0; k < W + 1; k++){
      diff[i][k] = 0;
    }
  }
  
  for(int i = 0; i < N; i++){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    diff[A][B]++;
    if(D + 1 <= W){
      diff[A][D + 1]--;
    }
    if(C + 1 <= H){
      diff[C + 1][B]--;
    }
    if(D + 1 <= W && C + 1 <= H){
      diff[C + 1][D + 1]++;
    }
  }
  int sum[H + 1][W + 1];
  for(int i = 0; i < H + 1; i++){
    for(int k = 0; k < W + 1; k++){
      sum[i][k] = 0;
    }
  }
  for(int i = 1; i < H + 1; i++){
    for(int k = 1; k < W + 1; k++){
      sum[i][k] = sum[i][k - 1] + diff[i][k];
    }
  }
  for(int i = 1; i < W + 1; i++){
    for(int k = 1; k < H + 1; k++){
      sum[k][i] = sum[k][i] + sum[k - 1][i];
    }
  }
  for(int i = 1; i < H + 1; i++){
    for(int k = 1; k < W + 1; k++){
      cout<< sum[i][k] << " ";
    }
    cout<<endl;
  }
  return 0;

  



}
