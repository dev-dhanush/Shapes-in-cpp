#include <iostream>
#include "ShapeHeader.h"

using namespace std;
using namespace Shapes;

void Triangle::getInput()
{
	cout<<"Enter the shape code : "<<endl;
	cin>>shapeCode;
	
	cout<<"Enter the base : "<<endl;
	cin>>b;
	
	cout<<"Enter the height : "<<endl;
	cin>>h;
}

float Triangle::area()
{
	return (b*h)/2;
}

char * Triangle::toString()
{
	char *st=new char[50];
	
	sprintf(st,"%d %c %f %f %f",shapeCode,shapeType,b,h,area());
	
	return st;
}

