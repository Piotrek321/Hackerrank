#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
   set<int>s; //Creates a set of integers.
    int N,y,x;
    cin >> N;
    set<int>::iterator itr;

    for(int i =0;i<N;i++)
    {
        cin >> y >> x;
        switch (y)
        {
            case 1:
            s.insert(x); //Inserts an integer x into the set s.
            break;
            
            case 2:
            s.erase(x);
            break;
            case 3:
            itr=s.find(x); 
            if(itr !=s.end()) cout <<"Yes" << endl;
            else cout <<"No" << endl;

            break;
        }
           
        
    }




    return 0;
}

