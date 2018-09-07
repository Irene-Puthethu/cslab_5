//Q.Printing a  hollow pyramid star pattern

//Include main library
#include<iostream>
using namespace std;

//Give main function
int main (){
	
	//Declaring the variable
	int n=5  ;
	//Print pattern
	for ( int i=0; i<=n; i++){
			//Print spaces
			for ( int k=i ; k<n; k++){
				cout << " ";
			}
			//Print stars by placing conditions
			for ( int k=0; k<=((2*i)-1); k++){
				
  				//Print conditions to:
				//1.Print stars without space for last row and
				//2.For the first column and
				//3.Last column  
			
				if (i==n || k==1 || k==((2*i)-1) ){
					cout << "*";
	            }
				else {
 					cout << " ";
     			}
			 }
    	//End line
		cout<< endl;
     }
            
	
return 0;
}
