#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int chocolate,wrappers, temp;
        chocolate=n/c;
       wrappers = chocolate;
        while(wrappers>=m)
            {
            temp=wrappers/m;
            chocolate += wrappers/m;
            wrappers = wrappers%m;
            wrappers +=temp;
            
        }
        cout << chocolate << endl;
    }
    return 0;
}

