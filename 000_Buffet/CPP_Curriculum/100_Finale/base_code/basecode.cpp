// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	gotoxy(5,5);
	cout<<"*Far voice* Ho! Ho! Ho!"<<endl;
cout<<"Look it's a christmas tree!";
gotoxy(20,25);
cout<<"*"<<endl;
gotoxy(19,24);
cout<<"mmm"<<endl;
gotoxy(18,23);
cout<<"eeeee"<<endl;
gotoxy(17,22);
cout<<"rrrrrrr"<<endl;
gotoxy(16,21);
cout<<"rrrrrrrrr"<<endl;
gotoxy(15,21);
cout<<"yyyyyyyyyyy"<<endl;
gotoxy(14,21);
cout<<"ccccccccccccc"<<endl;
gotoxy(13,21);
cout<<"hhhhhhhhhhhhhhh"<<endl;
gotoxy(12,21);
cout<<"rrrrrrrrrrrrrrrrr"<<endl;
gotoxy(11,21);
cout<<"iiiiiiiiiiiiiiiiiii"<<endl;
gotoxy(10,21);
cout<<"sssssssssssssssssssss"<<endl;
gotoxy(9,21);
cout<<"ttttttttttttttttttttttt"<<endl;
gotoxy(8,21);
cout<<"mmmmmmmmmmmmmmmmmmmmmmmmm"<<endl;
gotoxy(7,21);
cout<<"aaaaaaaaaaaaaaaaaaaaaaaaaaa"<<endl;
gotoxy(6,21);
cout<<"sssssssssssssssssssssssssssss"<<endl;
gotoxy(17,20);
cout<<"IIIIII"<<endl;
gotoxy(17,19);
cout<<"IIIIII"<<endl;
gotoxy(17,18);
cout<<"IIIIII"<<endl;
cout<<"Wait!!! There's a gift under it for you!!!"<<endl;
cout<<"What texture do you want your gift to be?"<<endl;
	char symbol;
	cin>>symbol;
	cout<<" How wide would you like your present box ?"<<endl;
	int width;
	cin>>width;
	cout<<"How tall should your present box be?"<<endl;
	int height;
	cin>>height;
	int w;
	int i;
	for(w = 0;w < height; w++)
	{
	for(i = 0;i < width; i++)
	{
	cout<<symbol;
	}
	cout<<endl;
	}
cout<<"There's gift! Open it on christmas day! Happy Holidays!"<<endl;


















}
