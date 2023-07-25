#include<iostream>
#include"ShapeHeader.h"
#include"Menu.h"

using namespace Shapes;
using namespace Menu;
using namespace std;

int MainMenu::mainMenu()
{
	system("cls");
	cout<<"\n1.Add Shapes";
	cout<<"\n2.List Shapes";
	cout<<"\n0.Quit";
	
	cout<<"\nEnter Your Choice : ";
	cin>>cho;
	
	return cho;
}

int MainMenu::shapeMenu()
{
		cout<<"\n1.Add Circle";
		cout<<"\n2.Add Rectangle";
		cout<<"\n3.Add Triangle";
		cout<<"\n0.Quit";
		
		cout<<"\n\nEnter Your Choice :";
		cin>>cho;
		
		return cho;
}


