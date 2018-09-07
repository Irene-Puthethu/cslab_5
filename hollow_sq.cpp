//Q.Printing a hollow square star pattern

//Include main library
#include<iostream>
using namespace std;

//Give main function
int main (){
	
	//Declaring the variable
	int n=5;
	//Print pattern
	for ( int i=0; i<n; i++ ){
		//Print all stars in the first row 
		if ( i == 0 ){
			//Print 5 stars
		  	for (int i=0;i<n;i++){
			cout << "*";
			}
        }    
		//Print the last row 
		else if (i==n-1){
			//Print 5 stars
			for (int i=0;i<n;i++){
			cout << "*";
			}
        }
		//Rest stars
		else {
 			//Print star
			cout<< "*";
			//Print n-2 space
			for (int i=0;i<n-2;i++){
	 			cout<< " ";
			}
			//Print star
			cout<< "*";
		}
		// End the line 
		cout<< endl;
 	}

return 0;
}
