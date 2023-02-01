#include <iostream>
using namespace std;
 
int main(){
  int N, K;
  int answer = 0;
  cin >> N >> K;
  if( 3 * N >= K){
   for(int i = 1; i <= N; i++){
    for(int k = 1; k <= N; k++){
      if(K - i - k <= N && K - i - k >= 1){
        answer++;
      }
    }
   }
  }
  cout<<answer<<endl;
  return 0;
}
