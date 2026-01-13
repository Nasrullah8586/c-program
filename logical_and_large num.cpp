#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter three number: ";
	cin>> num1>>num2>>num3;
	if(num1>=num2&&num1>=num3){
		cout<<"large number is:"<<num1;
	}
	else if(num2>=num1&&num2>=num3){
		cout<<"large number is:"<<num2;
	}
	else{
		
		cout<<"large number is:"<<num3;
	}



	getch();
	
}

