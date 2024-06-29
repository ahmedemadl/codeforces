//=====================================================
// Author      : ahmedgbr367
// Date        : 29/6/2024
// Description : Junior Training Sheet V7.0
// Problem Type: A
// Problem No. : 218
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, num, peaks = 0;
  cin >> n >> k;
  int array[2 * n + 1], final[2 * n + 1];

  for (int i = 0; i < ((2 * n) + 1); i++) {
    cin >> array[i];
  }
  for (int i = (((2 * n) + 1) - 1); i >= 0; i--) {
    num = array[i];

    if (i % 2 == 0) {
      final[i] = num;
    } else {
      if (peaks < k) {
        if(array[i - 1] < array[i]-1 && array[i]-1 > array[i + 1]){
        final[i] = num- 1;
        peaks++;
        }
        else{
             final[i] = num;
        }
       }
        else{
            final[i]=num;
        }
       
      
     
      }
    }
  
  for (int i = 0; i < ((2 * n) + 1); i++) {
    cout << final[i] << " ";
  }

  return 0;
}
