// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	gotoxy(3,5);
	cout << 'A';
	gotoxy(4,5);
	cout << 'R';
	gotoxy(5,5);
	cout << 'M';
	gotoxy(6,5);
    cout << '@';
    gotoxy(7,5);
    cout << 'N';
    gotoxy(3,6);
    cout << 'L';
    gotoxy(3,7);
    cout << 'L';
    gotoxy(3,8);
    cout << 'E';
    gotoxy(3,9);
    cout << 'N';
    
    for(int i = 0; i < 5; i++){
    	gotoxy(3+i,5);
    	cout << 'N';
    }
    
    
}   
    
    
    
    

