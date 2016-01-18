#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> decToBin(int a)
    {
    int b=1;
    vector<int> vect;
    while(true)
        {
    
            vect.push_back(a%2);
            a=a/2;
        if(b==2) break;
        if(a/2<1) b++;
 
    }
    return vect;
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,num;
    cin >>n;
    for(int i=0;i<n;i++)
        {
        vector <int> res;
        
        
        cin >>num;
        res = decToBin(num);
        //vector <int> :: iterator iter =res.end();
        vector <int> :: iterator iter =res.begin();

       iter =res.end()-1;
        while(iter != res.begin()-1)
            {
            cout << *iter;
            iter--;
        }
        
        
        cout << endl;
    }
    return 0;
}

