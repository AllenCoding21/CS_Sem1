// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Enter border character"<<endl;
	char symbol;
	cin>>symbol;
	cout<<" Enter box width"<<endl;
	int width;
	cin>>width;
	cout<<"Enter box height"<<endl;
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



}
