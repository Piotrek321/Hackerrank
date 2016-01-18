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
    int n;
    cin >> n;
    int tmp=n;
    for(int j=0;j<n;j++)
    {
         for(int i=0;i<tmp-1;i++)
            {
                cout << " ";
            }
                 for(int z=0;z<(n-tmp+1);z++)
            {
                cout << '#';
            }
        tmp--;
        cout << endl;
        
    }
   
    return 0;
}

