#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    string result=s;
    int temp =k;
   
    for(int i=0;i<n;i++){
        if((s[i]>=65 && s[i] <=90) ){   
            while(s[i]+k>90 )k= -26+k;
            result[i]=s[i]+k;
            k=temp;
        }
        else if((s[i] >=97 && s[i]<=122)){
             while(s[i]+k>122)k= -26+k;
            result[i]=s[i]+k;
            k=temp;
        }else{
           result[i]=s[i];
        }

    }

    cout <<result;
    return 0;
}

