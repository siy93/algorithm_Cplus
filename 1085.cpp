#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << min(min(y, h - y), min(x, w - x));
	return 0;
}