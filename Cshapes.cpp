#include<iostream>
#include"ShapeHeader.h"

using namespace std;
using namespace Shapes;

void Circle::getInput()
{
	cout<<"Enter the shape code : "<<endl;
	cin>>shapeCode;
	
	cout<<"Enter the radius : "<<endl;
	cin>>r;	   
}

float Circle::area()
{
	return (22.0/7)*r*r;
}

char* Circle::toString()
{
	char *st=new char[50];
	
	sprintf(st,"%d %c %f %f",shapeCode,shapeType,r,area());
	
	return st;
}

