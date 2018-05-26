#include <iostream>
#include  <math.h>
using namespace std;
const int N = 10;
int main()
{
    double arr[N];
    double max_mod;
    for(int i = 0; i < N; i++){
        cin>>arr[i];

    }
        max_mod = fabs(arr[0]);

    for(int i = 0; i < N; i++){
      if(max_mod < fabs(arr[i])){
        max_mod = fabs(arr[i]);
      }
    }
    int sum = 0;
    int num = 0;

    for(int i = 0; i < N; i++){
      if(arr[i] > 0){
       num = i; break;
      }
    }

    for(int i = num; i < N; i++){
    sum += arr[i];
    }
    cout<<"sum = "<< sum <<endl;
    cout<<"max = "<< max_mod <<endl;


    return 0;
}
