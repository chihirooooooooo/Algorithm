#include <iostream>
using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;
  int A[N];
  int total[N + 1];
  total[0] = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    total[i + 1] = total[i] + A[i];
  }
  int start;
  int end;
  int answer[Q];
  for(int i = 0; i < Q; i++){
    cin >> start >> end;
    answer[i] = total[end] - total[start - 1];
  }
  for(int i = 0; i < Q; i++){
    cout<< answer[i] <<endl;
  }
  return 0;
}
