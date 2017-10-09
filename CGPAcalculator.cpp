#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
	
	double y = 0;
	double x;
	double n = 0;
	ifstream inFile;
	
	inFile.open("CGPAinput.txt");
	
	if (!inFile) {
    	cerr << "Unable to open file";
    	return 0;   // call system to stop
	}
	
	while (inFile >> x) {
  		y = y + x;
  		n = n + 1;
	}
	inFile.close();
	
 	ofstream myfile;
 	myfile.open ("CGPAoutput.txt");
 	if (!myfile) {
    	cerr << "Unable to open file";
    	return 0;   // call system to stop
	}
  	myfile << "CGPA: " << y/n << "\nTotal sum: " << y << "\nNumber of Courses: " << n;
    myfile.close();
	

	
	cout << "Average is " << y/n << endl; 

	return 0;
}
