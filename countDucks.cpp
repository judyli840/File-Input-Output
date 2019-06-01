// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  
  ifstream ifs;
  
  ifs.open(argv[1]);

  if( !ifs){
	  cerr << "Open failed" << endl;
	  exit(1);
  }

  int num = 0;
  string line;
  while (!ifs.eof()){
	  
	  getline (ifs, line);
	  
	  int pos = line.find("duck");

	  if (pos >= 0){
		  num++;
	  }
  }

	  cout << "There were " << num << " ducks in " << argv[1] << endl;

  ifs.close();
  return 0;
}
