#include<bits/stdc++.h>
using namespace std;
int sz(vector<int>& v)
{
    return v.size();
}
int up(vector<int> &v, int num) {
	int lo = 0, hi = sz(v) - 1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (v[mid] <= num) lo = mid + 1;
		else if (v[mid] > num) hi = mid - 1;
 	}
	if (lo >= sz(v)) return -1;
	return v[lo];
}

int down(vector<int> &v, int num) {
	int lo = 0, hi = sz(v) - 1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (v[mid] < num) lo = mid + 1;
		else if (v[mid] >= num) hi = mid - 1;
	}
	if (hi < 0) return -1;
	return v[hi];
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int q;
	cin >> q;
	while (q--) {
		int num;
		cin >> num;
		int first = down(v, num);
		int second = up(v, num);
		
		if (first == -1) cout << "X";
		else cout << first;
		if (second == -1) cout << " X" << endl;
		else cout << " " << second << endl;
	}

	return 0;
}