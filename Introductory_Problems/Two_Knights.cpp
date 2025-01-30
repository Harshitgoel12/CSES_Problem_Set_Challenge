#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int k = 1; k <= n; k++) {
        long long total_ways = (1LL * k * k * (k * k - 1)) / 2;
        long long attacking_positions = 4LL * (k - 1) * (k - 2);
 
        long long valid_ways = total_ways - attacking_positions;
 
        cout << valid_ways << endl;
    }
 
    return 0;
}
