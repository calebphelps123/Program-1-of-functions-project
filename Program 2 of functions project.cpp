// Program 2 of functions project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>

#include<cmath>

using namespace std;

//this function calculates the radius and return to main function

double radius(double x1, double y1, double x2, double y2)

{

	double d;

	//if points are in centers

	if ((x1 == 0 && y1 == 0) || (x2 == 0 || y2 == 0))

	{

		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		return d;

	}

	//when points are not in central

	else

	{

		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		return d / 2;

	}

}

//function to calculate the circumference

double circumference(double r)

{


	return 2 * 3.14 * r;

}

//function to calculate the Area

double Area(double r)

{

	return 3.14 * r * r;

}

//start of main function

int main()

{

	//variables

	double x1, y1, x2, y2;

	double r;

	cout << "Enter 4 numbers seperated by a space that correspond to the";

	cout << "coordinates of two points" << endl;

	cin >> x1 >> y1 >> x2 >> y2;

	//call to function

	r = radius(x1, y1, x2, y2);

	cout << "The radius is: " << r << endl;

	//call to function

	double c = circumference(r);

	cout << "Circumference is: " << c << endl;

	//call to function

	double A = Area(r);

	cout << "Area is: " << A << endl;

	return 0;

}