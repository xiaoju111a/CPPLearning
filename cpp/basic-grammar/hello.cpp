#include <iostream>
#include <vector>
#include <string>
using namespace std;
class A {
	public:
	int id;
	string name;
	int score;
};
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
	cout << str.size() << endl;
	vector<int> q;
	for(int i = 1; i <= 10; i++) {
		q.push_back(i);
		cout << q[i-1] << endl;
	}
	for(auto i = q.begin(); i != q.end(); i++) {
		cout << *i << " ";
	}
	cout << q.size() << endl;
	A t;
	t.id = 1;
	t.name = " hello ";
	t.score = 99;
	cout << t.id << " " << t.name << " " << t.score << endl;
	int a = 10;
	int& ya = a;
	cout << ya << endl;
	ya -= 1;
	cout << a << " " << ya << endl;
	return 0;
}
