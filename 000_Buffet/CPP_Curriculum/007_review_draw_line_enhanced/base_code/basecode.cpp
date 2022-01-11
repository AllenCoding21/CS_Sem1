// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;

cout<<"enter line symbol"<<endl;
char symbol; 
cin>>symbol;
cout<<"enter line length"<<endl;
int linelength;
cin>>linelength;
cout<<"enter x coordinate";
int x;
cout<<"enter y coordinate";
int y;
cin>>y;
int i;
{
for(i = 0; i < linelength; i++ )

}
for(i = 0; i<linelength; i++)
{
gotoxy(i+x,y);
cout<<symbol;
}
}
