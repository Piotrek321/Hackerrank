#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }

    vector <int> tab;
    
    
    int max=0,maxTeams=0;
    int team=0;
    for(int z=0;z<(n-1) ;z++){
        for(int i=(z+1);i<(n) ;i++){
            tab.push_back(0);
            for(int j=0;j<(m) ;j++){
                if(topic[z][j] == '1' || topic[i][j]== '1') tab[team]++;
            }team++;
        }
    }
    
    int ctr=0;
        for(int i=0;i<(tab.size()) ;i++){
            if(tab[i] > max){
                max = tab[i];
                ctr=0;
            }
            if(tab[i] >= max)   ctr++;
    }
    cout << max << endl << ctr << endl;

    return 0;
}

