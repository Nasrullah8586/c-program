#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double hight,base,area;
	
	cout<<"enter the triangle's base: ";
	cin>>base;
	
	cout<<"enter the triangle's hight: ";
	cin>>hight;
	
	area= (double)1/2*hight*base;
	
	cout<<"the area of the triangle is: "<<area;
	
	getch();
	
}

