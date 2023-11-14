#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Func {
	int l;
	int h;
public:
	Func(int a, int x) {
		l = a;
		h = x;
	}
	bool operator()(int elem) {
		return ((elem >= l) && (elem <= h));
	}
};

int main() {

	vector<char> arr{'a', 'b', 'c', 'd', 'S', 'W', 's', 'h', 'w', 'z', 'Y', 'A' };
	ostream_iterator<char> out(cout, " | ");

	copy(arr.begin(), arr.end(), out);
	cout << endl;

	auto it = remove_if(arr.begin(), arr.end(), Func(35, 96));
	arr.erase(it, arr.end());

	copy(arr.begin(), arr.end(), out);

	return 0;
}