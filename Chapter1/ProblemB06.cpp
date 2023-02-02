#include <iostream>
#include <string>
using namespace std;

int main(){
  int N, Q;
  cin >> N;
  int lottery;
  int win[N + 1];
  win[0] = 0;
  for(int i = 0; i < N; i++){
    cin >> lottery;
    if(lottery == 1){
      win[i + 1] = win[i] + 1;
    }else{
      win[i + 1] = win[i];
    }
  }
  int start;
  int end;
  cin >> Q;
  string answer[Q];

  for(int i = 0; i < Q; i++){
    cin >> start >> end;
    if(end - start + 1 < (win[end] - win[start - 1]) * 2){
      answer[i] = "win";
    }else if(end - start + 1  == (win[end] - win[start - 1]) * 2){
      answer[i] = "draw";
    }else{
      answer[i] = "lose";
    }
  }
  for(int i = 0; i < Q; i++){
    cout<<answer[i] <<endl;
  }
  return 0;

}
