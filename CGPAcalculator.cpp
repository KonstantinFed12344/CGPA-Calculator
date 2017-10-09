#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
	
	double y = 0; // will hold sum of gradepoints
	double x; // variable that will be used to store file input
	double n = 0; // will hold total number of courses
	
	ifstream inFile; // opens file stream, inFile, for reading
	
	inFile.open("CGPAinput.txt"); // Opens text file containing the grade points for each course
	
	if (!inFile) { //Checks if file was found
    	cerr << "Unable to open file";
    	return 0;   // call system to stop
	}
	
	while (inFile >> x) { // calculates sum of grade points and total number of courses from file
  		y = y + x; // calculates sum of gradepoints
  		n = n + 1; // keeps track of total number of courses
	}
	
	inFile.close(); // closes input file
	
 	ofstream outFile; // opens file stream, outfile, for writing
 	
 	outFile.open ("CGPAoutput.txt"); // opens text file that will hold cgpa calculated from input file
 	
 	if (!outFile) { //Checks if file was found
    	cerr << "Unable to open file";
    	return 0;   // call system to stop
	}
	
  	outFile << "CGPA: " << y/n << "\nTotal sum: " << y << "\nNumber of Courses: " << n; // writes cgpa data to file
  	
    	outFile.close(); // closes file 
	

	
	cout << "CGPA is " << y/n << endl; // Also displays cgpa in command console

	return 0;
}
