//Персональный шаблон проекта С++
#include <iostream>
using namespace std;

template <typename T> T func(T num) {
	return num * num * num;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	cout << func(n) << endl;
	cout << func(2.5) << endl;

	
	return 0;
}