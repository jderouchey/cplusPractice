#include <stdlib.h>
#include <iostream>



// Notes:117 start 173 end

using namespace std;

int main(int lenArgs, char* args[])
{
	int page = 0;
	if (lenArgs > 1){
		page = atoi(args[1]);
	}
	else{
		cout << "Please give an argument to the program" << endl;
		return 1;
	}
	
	cout << ((page - 117)/173.0) * 100 
	     << "Percentage completed in Chapter 3" 
	     << endl;  

	return 0;
}
