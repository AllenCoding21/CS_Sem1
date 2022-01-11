// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	cout<<"enter border character"<<endl;
	char symbol;
	cin>>symbol;
	cout<<"enter box width"<<endl;
	int width;
	cin>>width;
	cout<<"enter box height"<<endl;
	int height;
	cin>>height;
	
	for(int y = 1; <= height; y++){
		for(int z = 1; x <= width; x++){
			gotoxy(x,y+8);
			cout << symbol;
		}
		
	}
	
	for(int b = 1; b <= height - 2; b++){
		for(int l = 1; l <= width - 2; l++){
			cout << " ";
			
		}
	}
		

}
