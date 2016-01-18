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

        cin >> n;
  
        
   vector <int> vect;
           int tmp = n;
        int counter=0;

        while(tmp)
        {
            vect.push_back(tmp%10) ;
            
            tmp=tmp/10;
        }
        
        
    for (std::vector<int>::const_iterator i = vect.begin(); i != vect.end(); ++i)
     {      if(*i==0)continue;
            if(n%(*i)==0) counter++;
    }   
        cout << counter << endl;
   


        
    }
    return 0;
}

