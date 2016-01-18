#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> vect;
    int N,a,b,c,d;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> a;
        vect.push_back(a);
    }
    cin >> b >> c>>d;
    if(c==0) c=1;

    vect.erase(vect.begin()+b-1);
    vect.erase(vect.begin()+c-1,vect.begin()+d-1);
    
    cout << vect.size() << endl;
        for(int i=0;i<vect.size();i++)
    {
       cout << vect[i] << " ";
    }
 
    return 0;
}

