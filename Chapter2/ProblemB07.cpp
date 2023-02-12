#include <iostream>
using namespace std;

int main(){
  int T;
  cin >> T;
  int N;
  cin >> N;
  int diff[T + 1];
  for(int i = 0; i < T + 1; i++){
    diff[i] = 0;
  }
  int start;
  int end;
  for(int i = 0; i < N; i++){
    cin >> start >> end;
    diff[start]++;
    diff[end]--;
  }
  int total = 0;
  for(int i = 0; i < T; i++){
    total += diff[i];
    cout<< total <<endl;
  }
  return 0;
}
