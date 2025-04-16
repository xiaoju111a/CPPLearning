#include <iostream>
#include <vector>
using namespace std;
int main() {
	cout << "hello world!" << endl; //输出hello world
	bool flag = 1;
	char c = 'a';
	int k = 5;
	float f = 3.14;
	double d = 4.1;
	wchar_t w = '你';
	cout << flag << " " << c << " " << k << " " << f << " " << d << " " << w << endl;
	string str = "hello, \
		      world";
	cout << str << endl;
	vector<int> q;
	for(int i = 1; i <= 10; i++) {
		q.push_back(i);
		cout << q[i-1] << endl;
	}
	for(auto i = q.begin(); i != q.end(); i++) {
		cout << *i << " ";
	}
	return 0;
}
