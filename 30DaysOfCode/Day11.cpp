#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxelem(vector<int> v){
    int max = v[0];
    for(int i = 1; i < v.size()-1; ++i){
        if(v[i] > max) max = v[i];
    }
    
    return max;
}

int main(){
 int max =-999;
    int a=0;; 
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int sum=0;
    for(int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            
            sum += arr[i][j];
            sum += arr[i][j+1];
            sum += arr[i][j+2];
            sum += arr[i+1][j+1];
            sum += arr[i+2][j];
            sum += arr[i+2][j+1];
            sum += arr[i+2][j+2];
            //cout <<sum <<endl;
            if(sum>max) max =sum;
             sum=0;
            
        }
        
                    
       

    }
cout << max;
    
    
    
    
    return 0;
}
