/* Name: Thy Nguyen 
CSCI 3010
*/

#include "Rectangle.h"
#include <iostream>

using namespace std;

/*  Constructor
	@ param p1 is the lower left corner
   			p2 is the upper right corner
  // if you find that not following this guidelines breaks this class, that
  // would be considered a bug
 */

Rectangle::Rectangle(Point p1, Point p2){
	p1_ = p1;
	p2_ = p2;
}

/* 
	Get the width of the rectangle between p1.x and p2.x
	@param
	@return int width
*/
int Rectangle::GetWidth(){
	int width = p2_.x - p1_.x;
	return width;
}

/* 
	Get the height of the rectangle between p2.y and p2.y
	@param none
	@return int height
*/
int Rectangle::GetHeight(){
	int height = p2_.y - p1_.y;
	return height;
}

/* 
	Return true iff this rectanlge share any points with the other one
	@param other
	@return bool check
*/
bool Rectangle::Overlaps(Rectangle& other){
	bool check = false;
	Point o1 = other.get_p1();
	Point o2 = other.get_p2();

	if (((o1.x == p1_.x) && (o1.y == p1_.y)) || ((o1.x == p2_.x) && (o1.y == p2_.y))) {
		check = true;
	}
	else if (((o2.x == p1_.x) && (o2.y == p1_.y)) || ((o2.x == p2_.x) && (o2.y == p2_.y))){
		check = true;
	}
	else{
		check = false;
	}
	return check;
}

/*
	Returns the area of this rectangle
*/
int Rectangle::CalculateArea(){
	int area = GetHeight() * GetWidth();
	return area;
}

/* 
	Moves the bottom left coordinate (p1) down one and to the left one
    Moves the upper right coordinate (p2) up one and to the right one
	@param none
	@return none
 */
  void Rectangle::Expand(){
  	p1_.x -= 1; //Move p1 down one
  	p1_.y -= 1; //Move p1 left one
  	p2_.x += 1; //Move p2 up one
  	p2_.y += 1; //Move p2 right one
}


 /* 
 	Moves the bottom left (p1) coordinate up one and to the right one
  	Moves the upper right (p2) coordinate down one and to the left one
  	@param none
  	@return none
 */ 
  void Rectangle::Shrink(){
  	p1_.x += 1; //Move p1 up one
  	p1_.y += 1; //Move p1 right one
  	p2_.x -= 1; //Move p2 down one
  	p2_.y -= 1; //Move p2 left one
  }



















