//Q.Printing a inverted right angled triangle

//Include main library
#include<iostream>
using namespace std;

//Give main function
int main (){
	
	//Declaring the variable
	int n=5  ;
	//Print pattern
	for ( int i=0; i<5 ; i++) {
		//Print stars 
        for ( int j=0; j<(5-i); j++ ){
			cout << "*";
		}
		//End line 
		cout << endl;
	}

return 0;
}
