#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map <string,int> m;
    int N,a,c;
    string b;
    cin >> N;
    int z;
    for(int i =0; i<N;i++)
    {
        cin >>a >>b;
        switch(a)
        {
            case 1:
            cin >> c;
            z=m[b];
            m.erase(b);
            c +=z;
            m.insert(make_pair(b,c));

            
            break;
            
            case 2:
            m.erase(b);
            break;
           
            case 3:
            if(m[b])cout << m[b] << endl;
            else cout << 0 << endl;
            break;
            
        }
        
    }
    
    return 0;
}

