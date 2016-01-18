#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
 
    cin >> n >> t;
    //cout << "n: " << n << "t: " << t <<endl;
   int min=9999;

    vector<int> width(n);
        vector<int> result;
  
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        min =99999;
        int i;
        int j;
   cin >> i >> j;
   //cout << "i: " << i << "j: " << j <<endl;

        for(int z=i;z<=(j);z++)
            {  //cout <<"z: " << z << endl;
            // cout << "Width:     " << width[z] << endl;
            if(width[z]<min)
                {
                min=width[z];
                          
                 
                }
                        }
           //cout << endl <<"min:      " << min << endl << endl;
              result.push_back(min);     
    }
      vector<int> :: iterator iter = result.begin();
    
    while(iter !=result.end())
        {
        cout << *iter << endl;
        iter++;
    }
     
    
    
    return 0;
}

