#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {

char time[11] = {0};
scanf("%s", time);
int n_hour = atoi(time);
char plus12 = n_hour >= 12;
n_hour += time[8] == 'P' ? (plus12 ? 0 : 12) : (plus12 ? -12 : 0);
printf("%02d:%.*s:%.*s", n_hour, 2, time + 3, 2, time + 6);
return 0;

}
