#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    //cout << t << endl;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long b;
        unsigned long long w;
        cin >> b >> w;
        unsigned long long x;
        unsigned long long y;
        unsigned long long z;
        cin >> x >> y >> z;
        unsigned long long costWithPaintingWtoB=0, costWithPaintingBtoW=0,cost=0;
        cost = b*x+y*w ;
        costWithPaintingWtoB= (b+w)*x+w*z;
        costWithPaintingBtoW= (b+w)*y+b*z;
        //cout << "costWithPaintingWtoB:  " << costWithPaintingWtoB << endl;
        //cout << "costWithPaintingBtoW:  " << costWithPaintingBtoW << endl;
        //cout << "cost:  " << cost << endl;
       /* if(x>y){
            if(x>y+z) cout << (b+w)*y+b*z << endl;
            else cout << b*x+y*w << endl;
        }else{
            if(y>x+z) cout << (b+w)*x+w*z << endl;
            else cout << b*x+y*w << endl;
        }
        */
        
        if(cost < costWithPaintingWtoB && cost < costWithPaintingBtoW) cout << cost << endl;
        else if(costWithPaintingWtoB < cost && costWithPaintingWtoB < costWithPaintingBtoW) 
            cout << costWithPaintingWtoB << endl;
            
        else
            cout << costWithPaintingBtoW << endl;
        
          
  
        
       
        
    }
    return 0;
}

