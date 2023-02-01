#include <iostream>
using namespace std;

int main(){
  int N;
  cin>>N;
  int answer[10];
  for(int i = 9; i >=0; i--){
    answer[i] = N % 2;
    N = N / 2;
  }
  for(int i = 0; i < 10; i++){
    cout<<answer[i];
  }
  return 0;
}
