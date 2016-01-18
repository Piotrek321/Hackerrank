#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long N;
    long long min;
    cin >> N;
    vector <long long> vectr(N);
    vector <int> mins(N-1);
    
    for(int i =0;i<N;i++) cin >> vectr[i];

    long long i, j, key;
    
    for(i=1; i<N; i++)
    {
      key = vectr[i];
      j = i-1;
      while(j>=0 && key < vectr[j])
      {
       vectr[j+1] = vectr[j];
        j--;
      }
      vectr[j+1]  = key;
    }


    min = abs(vectr[0]-vectr[1]);
    for(int i =0;i<N-1;i++){
       long temp =  abs(vectr[i]-vectr[i+1]);
       mins[i]=temp;
       if(temp<=min){
           min=temp;
       }
    }
 
    
      for(int i =0;i<N-1;i++){
        if(mins[i] ==min) cout << vectr[i] << " "<< vectr[i+1] << " ";
    }
    

    return 0;
}

