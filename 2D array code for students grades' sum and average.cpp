/*
Description: A 2D Array that computes the given students grades' sum and average and outputs the same to the user as well as creates a new file in a users computer,writes into it the directed code contents into it and then closes it.
Name: Geoffrey Njenga 
Regno:BCS-03-0006/2025
*/
#include<iostream>
#include<fstream>
using namespace std;

int main() {
	
	int i,j;
	int sum = 0;
	
//create file
ofstream MyFile("C:\\Users\\Geoffrey\\OneDrive\\Desktop\\C++\\C++ REPO\\arrays_2D.txt");

//Declare and initialize
int score[2][3] = {
	{20, 30, 40},
	{50, 60, 70}
};

//for(start, stop, step)
for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		cout<<score[i][j]<<endl;
		sum +=score[i][j];
		MyFile<<score[i][j]<<endl;
	}
}
	
cout<<"The sum is: "<<score[i][j]<<endl;
cout<<"Average: "<<sum/6<<endl;

//write to file
MyFile<<"The sum is: "<<score[i][j]<<endl;
MyFile<<"Average: "<<sum/6<<endl;

//close file
MyFile.close();	
		
	return 0;
}
