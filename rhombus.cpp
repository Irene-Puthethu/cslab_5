//Q.Printing a rhombus

//Include main library
#include<iostream>
using namespace std;

//Give main function
int main (){
	
	//Declaring the variable
	int n=5  ;
	
	for (int i=0; i<=n; i++){
		//Print spaces 
        for (int j=0; j<=n-i; j++){
		cout << " ";
        }
		//Print stars
		for (int j=0; j<=n; j++){
        cout << "*";
        }
      //End line
	  cout << endl;
     } 

return 0;
}
