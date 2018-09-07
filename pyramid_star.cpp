//Q.Printing a pyramid star pattern

//Include main library
#include<iostream>
using namespace std;

//Give main function
int main (){
	
	//Declaring the variable
	int n=5;
	//Print pattern
	for ( int i=0; i<=n; i++){
			//Print spaces
			for ( int k=i ; k<=n; k++){
				cout << " ";
			}
			for ( int k=0; k<=(2*i-2); k++){
				//Print stars
  				cout << "*";
			}
    	//End line
		cout<< endl;
     }
            
	
return 0;
}
