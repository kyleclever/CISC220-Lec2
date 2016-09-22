/*
 * 6_classes.cpp

 *
 *  Created on: Sep 21, 2016
 *      Author: kylew
 */

#include<iostream>
using namespace std;

// header file (.hpp)
// separate file (.cpp)
// main file (.cpp)

// constructor and destructor

///////////////////////////////////////////////////////////////////////////////////
class Rect {
		int length;
		int width;
		int area;
	public:
		Rect (int x, int y);
		void setLen(int x);
		int getLen();
		int getArea();
}; //Rect header

Rect::Rect(int x, int y) {
	length = x;
	width = y;
	area = length * width;
}
void Rect::setLen(int x) {  //add setWidth
	length = x;
	area = length * width;
}
int Rect:: getLen() {  // add getWidth
	return length;
}
int Rect::getArea() {
	return area;
}


int main() {
Rect r(3,4);   // constructor happens
r.setLen(2);
cout << r.getLen() << endl;
cout << r.getArea() << endl;
return 0;
} //main



///////////////////////////////////////////////////////////////////////////////////

// more like JAVA
class Rect {
		int length;      // default – private – different from structs
		int width;
		int area;

public:
		Rect() {   // this is a constructor
			length = 3;
			width = 4;
			area = length * width;
		}  //Constructor

		void setLen(int x) {    // Setters: why do I need this?  (do the same for width – why not area?)
			length = x;
			area = length * width;
		} //setLen

		int getLen() {  //Getters  (do the same for width
			return length;
		} //getLen

		int getArea() {
			return area;
		} //getArea
}; //Rect

int main() {
Rect r;   // constructor happens
r.setLen(2);
cout << r.getLen() << endl;
cout << r.getArea() << endl;
return 0;
} //main



