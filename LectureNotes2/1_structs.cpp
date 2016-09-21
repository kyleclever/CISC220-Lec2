/*
 * 1_structs.cpp
 *
 *  Created on: 2016Äê9ÔÂ21ÈÕ
 *      Author: Kyle
 */
#include<iostream>
using namespace std;

struct StudentInfo {
string fname;
string lname;
int id;
StudentInfo next;
};  //StudentInfo

int main() {
StudentInfo Sam;  // could also say struct StudentInfo Sam;
Sam.fname = "Sam";
Sam.lname = "Stone";
Sam.id = 3241;
StudentInfo studarr[5];
studarr[1].fname = "Taylor";
cout << studarr[1].fname << endl;
return 0;
} //main



