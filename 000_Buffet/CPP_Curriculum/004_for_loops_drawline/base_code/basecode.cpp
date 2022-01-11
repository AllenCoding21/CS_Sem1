// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout<<"What symbol are you using for your line?"<<endl;
char symbol;
cin>>symbol;
cout<<"How long is your line going to be?"<<endl;
int length;
cin>>length;
cout<<"Will your line be vertical or horizontal? v/h";
char hv;
cin>> hv;

if (hv == 'v')
{
	int i;
	for(i = 0;i < length; i++)
	{
		cout<<symbol<<endl;
	}
}
if (hv == 'h')
{
	int i;
	for(i = 0; i < length; i++)
	{
	cout<<symbol;
	}
}
}