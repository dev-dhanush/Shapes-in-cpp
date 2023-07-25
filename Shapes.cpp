#include <iostream>
#include <conio.h>
#include <fstream>
#include"MainHeader.h"
#include "ShapeHeader.h"

using namespace MainShapes;
using namespace std;
using namespace Shapes;

void MainShape::addShape()
{
	ofstream file;
	int opt;
	char data[51];
	CShapes *s;
	opt=menu.shapeMenu();
	
	switch(opt)
	{
		case 1:
		s=new Circle();
		break;
		
		case 2:
		s=new Rectangle();
		break;
		
		case 3:
		s=new Triangle();
		break;
		
		case 0:
		return;
		break;
		
		default:
		cout<<"\nInvalid Input...";
		break;
	}
	s->getInput();
	
	file.open(".\\Shapedata.txt",std::ios::app);
	
	file<< s->toString() << endl;
	file.close();
}

void MainShape::listShapes()
{
	ifstream file;
	string data;
	cout<<"\n\nLIST SHAPES:\n\n";
	file.open(".\\Shapedata.txt");
	while((getline(file,data))!=NULL)
		cout<<data<<endl;
	file.close();
	getch();
}

void MainShape::start()
{

	int opt;
	
	do{
	opt=menu.mainMenu();
	
	if(opt==0) break;
	switch(opt)
	{
		case 1:
		addShape();
		break;
		
		case 2:
		listShapes();
		break;
		
		default:
		cout<<"\nInvalid Input...";
		break;
	}
	}while(opt!=0);
}

