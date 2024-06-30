#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

ofstream file("password.txt");

int passgen() {
	return rand() % 94 + 32;
}

void put_in_file(char x) {
	cout << (char)x;
	file << (char)x;
}

int main() {
	srand(time(NULL));
	for (int i = 1; i <= 20; i++) {
		put_in_file(passgen());
	}
	return 0;
}