//One of the test cases does not pass
#include <iostream>
using namespace std;

int main(){
  int D, N;
  cin >> D;
  cin >> N;
  int total[D + 1];
  int difference[D + 1];
  for(int i = 0; i < D + 1; i++){
    total[i] = 0;
    difference[i] = 0;
  }
  int start;
  int end;
  for(int i = 0; i < N; i++){
    cin >> start >> end;
    difference[start]++;
    difference[end + 1]--;
  }
  for(int i = 1; i < D + 1; i++){
    total[i] = total[i - 1] + difference[i];
    cout<< total[i] <<endl;
  }
  return 0;
}
