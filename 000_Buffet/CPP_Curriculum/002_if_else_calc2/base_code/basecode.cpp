// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;

cout<<"Enter two number you'd like to calculate!"<<endl;
	int num1;
	int num2;
	cin>>num1;
	cin>>num2;
	cout<<"Would you like to -, +, /, or *?"<<endl;
	char in;
	char add = '+';
	char subtract = '-';
	char multiply = '*';
	char divide = '/';
	int answer;
	cin>>in;
	if (in==add)
	{
	answer = num1+num2;
	cout<<answer<<endl;
	}
	if (in==subtract)
	{
	answer = num1-num2;
	cout<<answer<<endl;
	}
	if (in==multiply)
	{
	answer = num1*num2;
	cout<<answer<<endl;
	}
	if (in==divide)
	{
	answer = num1/num2;
	cout<<answer<<endl;
	}

































}
