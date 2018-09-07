//Q.Printing a square star pattern

//Include main library
#include<iostream>
using namespace std;

//Give main function
int main (){
	
	//Declaring variable n
	int n=5;
	//Print stars in row 
	for( int i=0; i<n; i++ ){
		//Print stars in column
		for ( int j=0; j<n; j++){
			cout << "*";
						  }
				//Print the end of line
				cout<< endl;
							   }

return 0;
    }

