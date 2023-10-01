//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string y, string x) 
	{
        vector<int> xhash(26, 0);
        vector<int> yhash(26, 0);
        int wind = y.size();
        for(int i = 0; i < y.size(); i++)
        {
            int val = y[i] - 'a';
            yhash[val]++;
        }
        int cnt = 0;
        int i = 0, j = 0;
        while(j < x.size())
        {
            int val = x[j] - 'a';
            xhash[val]++;
            if(j >= wind - 1)
            {
                if(xhash == yhash) cnt++;
                xhash[x[i] - 'a']--;
                i++;
            }
            j++;
        }
       return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends