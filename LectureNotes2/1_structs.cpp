/*
 * 1_structs.cpp
 *
 *  Created on: 2016Äê9ÔÂ21ÈÕ
 *      Author: Kyle
 */
#include<iostream>
using namespace std;

/*
 * Structs:
 * - Arrays group many objects of the same type
 * - Structs group objects of different types
 * - Structs are similar to classes- by default: public
 */


struct StudentInfo {
	string fname;
	string lname;
	int id;
	//StudentInfo next;
};  //StudentInfo

void changeStud(StudentInfo *x) {
	x->fname = "Sammy";
	//new, means go to the name property in the address in x
	// going to the address found in x and finding the field named fname
} //changeStud


int main() {
	StudentInfo Sam;
	// could also say struct StudentInfo Sam;
	Sam.fname = "Sam";
	Sam.lname = "Stone";
	Sam.id = 3241;
	StudentInfo studarr[5];
	studarr[1].fname = "Taylor";
	cout << studarr[1].fname << endl;
	return 0;
} //main

int main2() {
	StudentInfo *c;
	c = new StudentInfo;
	c->fname = "Charlie";
	cout << c->fname << endl;  // go to the address found in c and find the fname field.

	changeStud(c);
	cout << c->fname << endl;  // go to the address found in c and find the fname field.
}//main




