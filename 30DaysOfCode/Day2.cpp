#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double price;
    int tax,b;
    cin >> price;
    cin >> tax;
    cin >> b;
    double n=((tax)*price)/100;
    double m=((b)*price)/100;
    price = n+m+price;

int rounded = (int)(price + 0.5);

    cout << "The final price of the meal is $" << rounded << ".";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

