#include <iostream>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  int nums[H + 1][W + 1];
  for(int i = 0; i < H + 1; i++){
    for(int k = 0; k < W + 1; k++){
      nums[i][k] = 0;
    }
  }
  for(int i = 1; i < H + 1; i++){
    for(int k = 1; k < W + 1; k++){
      cin >> nums[i][k];
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
      sum[i][k] = sum[i][k-1] + nums[i][k];
    }
  }
  for(int k = 1; k < W + 1; k++){
    for(int i = 1; i < H + 1; i++){
      sum[i][k] = sum[i][k] + sum[i - 1][k];
    }
  }
  int questions;
  cin >> questions;
  int question[questions][4];
  int answer[questions];
  for(int i = 0; i < questions; i++){
    cin >> question[i][0] >> question[i][1] >> question[i][2] >> question[i][3];
    answer[i] = sum[question[i][2]][question[i][3]] + sum[question[i][0] - 1][question[i][1] - 1] - sum[question[i][2]][question[i][1] - 1] - sum[question[i][0] - 1][question[i][3]];
  }
  for(int i = 0; i < questions; i++){
    cout<< answer[i] <<endl;
  }
  return 0;


}
