#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string name,phone;
    map <string,string> mapa;
    int n;
    cin >> n;
    cin.ignore();
    for(int i =0;i<n;i++)
        {
        getline(cin,name);
         getline(cin,phone);
        
        mapa.insert(pair <string,string> (name,phone));
    }
    while( getline(cin,name))
        {
        //phone=mapa[name];
            if(mapa[name]!="")
                cout << name << "=" << mapa[name] << endl;
            else
                cout <<"Not found" << endl;
    }

    
    return 0;
}
