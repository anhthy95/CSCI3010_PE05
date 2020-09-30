/*Name: Anh Thy Nguyen */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Rectangle.h"


TEST_CASE ( "Factorials are computed", "[factorial]") {
  REQUIRE( Factorial(2) == 2 );
  REQUIRE( Factorial(3) == 6 );
}

TEST_CASE ("Constructor function is tested", "[Rectangle]"){
	Point pt1;
	Point pt2;

	pt1.x = 0;
	pt1.y = 0;

	pt2.x = 4;
	pt2.y = 3;

	Rectangle rec (pt1, pt2);   //Instantiate the class

	SECTION( "Constructor - Rectangle"){
		REQUIRE( rec.get_p1().x == 0);
		REQUIRE( rec.get_p1().y == 0);
		REQUIRE( rec.get_p2().x == 4);
		REQUIRE( rec.get_p1().y == 3);
	}

	SECTION( "Get width test"){
		REQUIRE( rec.GetWidth() == 4);
	}

	SECTION( "Get width test"){
		REQUIRE( rec.GetHeight() == 3);
	}
	SECTION( "True iff overlaps"){
		Point pt3;
        Point pt4;
        Point pt5;

        pt3.x = 0;
        pt3.y = 1;
        pt4.x = 4;
        pt4.y = 3;
        pt5.x = 2;
        pt5.y = 2;

        Rectangle trueOther (pt3, pt4);
        Rectangle falseOtherr(pt3, pt5);


        REQUIRE(rec.Overlaps(trueOther) == true);
        REQUIRE(rec.Overlaps(falseOther) == false);
	}

	SECTION ( "Test Area Calculator" ){
		int area = 4*3;
		REQUIRE (rec.CalculateArea() == area);
	}

	SECTION ( "Expand the Rectangle Test"){
		rec.Expand();

		REQUIRE (rec.GetWidth() > 4);
		REQUIRE (rec.GetHeight() > 3);
	}

	SECTION ( "Shrink the Rectangle Test"){
		rec.Shrink();

		REQUIRE (rec.GetWidth() < 4);
		REQUIRE (rec.GetHeight() < 3);
	}

}








