#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> vect;
    int N,a,b,c;
    cin >> N;
    vector<int>::iterator low,is;
   
    for(int i=0;i<N;i++)
    {
        cin >> a;
        vect.push_back(a);
    }
    cin >> b ;
    for(int i =0;i<b;i++)
    {
        cin >> c;
        low=lower_bound(vect.begin(), vect.end(),c);
        if (*low==c)
        {cout << "Yes " << (low- vect.begin()+1)<< '\n';}
       else
       {cout << "No " << (low- vect.begin()+1)<< '\n';}       

    }
   
    return 0;
}

