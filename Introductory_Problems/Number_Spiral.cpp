// TC : O(1)
// SC : O(1)


#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        unsigned long long r, c;
        cin >> r >> c;
 
        unsigned long long ans = 0;
 
        if (r > c) {
            if (r % 2 == 0) {
                ans = r * r - c + 1; 
            } else {
                ans = (r - 1) * (r - 1) + c;
            }
        } else {
            if (c % 2 != 0) {
                ans = c * c - r + 1; 
            } else {
                ans = (c - 1) * (c - 1) + r;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
