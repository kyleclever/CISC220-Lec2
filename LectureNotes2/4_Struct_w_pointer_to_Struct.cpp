/*
 * 4_Struct_w_pointer_to_Struct.cpp
 *
 *  Created on: Sep 21, 2016
 *      Author: kylew
 */
#include<iostream>
using namespace std;

struct Studentinfo{
	string first;
	string last;
	int id;
	Studentinfo *next;
};

int main(){
	Studentinfo *first = new Studentinfo({"Jeff", "Jones", 3253, NULL});
	first ->next= new Studentinfo({"Anne", "Halma", 2211, NULL});

	Studentinfo *tmp = first ->next;
	tmp ->next = new Studentinfo({"Ben", "Nurns", 3890, NULL});

	tmp = tmp->next;
	tmp ->next = new Studentinfo({"Eve", "Williams", 8419, NULL});

	for (tmp = first; tmp != NULL; tmp = tmp ->next){
		cout << tmp ->first << ",";   //Jeff,Anne,Ben,Eve,
	}//for
	cout << endl;
}//main
