#include <iostream>
using namespace std;

int main(){
  int N;
  cin>>N;
  int start = 128;
  int answer = 0;
  for(int i = 10000000; i >= 1; i /= 10){
    answer += (N / i) * start;
    N %= i;
    start /= 2;
  }
  cout<<answer<<endl;
  return 0;

}
