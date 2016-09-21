/*
 * 2_allocated_array_struct.cpp
 *
 *  Created on: 2016Äê9ÔÂ21ÈÕ
 *      Author: Kyle
 */
#include<iostream>
using namespace std;

struct StudentInfo {
	string fname;
	string lname;
	int *grades;
}; //StudentInfo
int main() {
	StudentInfo *b;
	b = new StudentInfo[3]; //b holds the address of the first
							//StudentInfo Object in memory ¨C
							//at that location there¡¯s space
							//for 3 StudentInfo Objects
	b[0].fname = "bob";
	cout << b[0].fname << endl;
	b[0].grades = new int[4]; // grades now holds the address
						    //of an array of 4 ints
	b[0].grades[0] = 94;


	/*

	*(b[0].grades) = 94;   // go to the address in b, find the 0th struct, then 			// find the grades field, and go to the address in the grades field.
	cout << *(b[0].grades) << endl;

	*/


	/*

	StudentInfo *b;
	b = new StudentInfo;
	b->fname = "bob";
	b->grades = new int;
	*(b->grades) = 94;   // go to the address in b, find the grades field, and                                      // go to the address in the grades field.
	cout << *(b->grades) << endl

	 */
}//main


