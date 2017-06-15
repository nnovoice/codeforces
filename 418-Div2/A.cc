/*
http://codeforces.com/contest/814/problem/A
A. An abandoned sentiment from past
*/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool myfunction (int i,int j) { return (i>j); }

int main() {
	vector<int> av;
	std::vector<int> bv;
	int a = 0, b = 0;
	int n = 0, k = 0;
	cin >> n >> k;

	for (int i = 0; i < n; ++i) {
		cin >> a;
		av.push_back(a);
	}

	for (int i = 0; i < k; ++i) {
		cin >> b;
		bv.push_back(b);
	}

	sort(bv.begin(), bv.end(), myfunction);

	int j = 0;
	for (int i = 0; i < n; ++i) {
		if (av[i] == 0) {
			av[i] = bv[j++];
		}
	}

	bool isIncreasing = true;
	for (int i = 1; i < n; ++i) {
		if (av[i] <= av[i - 1]) { 
			isIncreasing = false;
			break;
		}
	}

	if(isIncreasing == false) cout << "Yes";
	else cout << "No";

	return 0;
}