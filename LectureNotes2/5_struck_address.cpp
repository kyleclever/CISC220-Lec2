
#include<iostream>
using namespace std;
struct StudentInfo {
	string first;
	string last;
	int id;
	StudentInfo *next;
};

int main() {
StudentInfo ds[] = {{"bob","Jones",32},{"tim","miller",44}};  //address: 0x445566
cout << ds << endl;
cout << &ds[0] << endl;
cout << &(ds[0].first) << endl;
cout << &(ds[0].id) << endl;
}//main

/*
0x62feec
0x62feec
0x62feec
0x62fef4
 */
