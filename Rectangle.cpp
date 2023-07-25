#include<iostream>
#include"ShapeHeader.h"

using namespace std;
using namespace Shapes;

void Rectangle::getInput()
{
	cout<<"Enter the shape code : "<<endl;
	cin>>shapeCode;
	
	cout<<"Enter the length : "<<endl;
	cin>>l;	   
	
	cout<<"Enter the width : "<<endl;
	cin>>w;	  
}

float Rectangle::area()
{
	return l*w;
}

char* Rectangle::toString()
{
	char *st=new char[50];
	
	sprintf(st,"%d %c %f %f %f",shapeCode,shapeType,l,w,area());
	
	return st;
}

