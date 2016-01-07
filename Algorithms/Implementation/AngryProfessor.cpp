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
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int plus=0;
        int minus=0;
        bool z= false;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        
        for(int a_i = 0;a_i < n;a_i++){
           if(a[a_i]<=0)
               minus++;
            else plus ++;
            if(minus>=k) 
            {cout << "NO" <<endl;
                z=true;
             break;
            }
        }
        if(z==false) cout << "YES" << endl;
        
    }
    return 0;
}

