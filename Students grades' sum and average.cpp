/*
Description: Creating a 1D array called grades that works around computing the sum and average of student grade and outputs the result to the user as well as creating a new file and storing the directed details inside it.
Name: Geoffrey Njenga Wanene
Regno: BCS-03-0006/2025
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
 int score[5] = {20,30,40,50,60};
 int i;
 int sum = 0;
 
 //create a file
 ofstream Myfile ("C:\\Users\\Geoffrey\\OneDrive\\Desktop\\C++\\C++ codes\\arrays.txt ");
 
 for(i=4; i>=0; i--){
 
 	cout<<score[i]<<endl;
	 Myfile <<score[i]<<endl;
 	sum += score[i];
 	}
	
	cout<<"The sum is: "<<sum<<endl;
	cout<<"Average: "<<sum/5<<endl;
	
		//write to a file
	Myfile <<"The sum is: "<<sum<<endl;
	Myfile <<"Average: "<<sum/5<<endl;
	
	//close a file
	Myfile.close();
	
 return 0;	
}
