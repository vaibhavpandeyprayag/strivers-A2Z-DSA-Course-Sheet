//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        vector<bool> bits (32, false);
        for (int i = 0; i < 32; i++) {
            if ((X & (1 << i)) > 0) bits[i] = true;
        }
        
        long long ans = 0;
        for (int i = 0; i < 32; i++) {
            if (bits[i]) ans += (1LL << (31 - i));
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends
