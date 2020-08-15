#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	string s;
	int cnt = 0;
	while(n--) {
		int tmp = 0;
		cin >> s;
		for(int i = 0; i < (int) s.size(); ++i) {
			if(s[i] == 'c' && s[i+1] == 'h') {
				tmp += 2;
				i++;
			}
			else if(s[i] == 'h' && s[i+1] == 'e') {
				tmp += 2;
				i++;
			}
			else if(s[i] == 'e' && s[i+1] == 'f') {
				tmp += 2;
				i++;
			}
		}
		if(tmp >= 2) cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
