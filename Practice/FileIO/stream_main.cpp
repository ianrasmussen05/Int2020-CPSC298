// In class stream I/O code in class from Rene German

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
  // filename must be entered as a command line parameter
  if (argc < 2)
  {
    cout << "Invalid command line parameters..." << endl;
    return 1;
  }



  ifstream inFS; // input file stream
  string fileNum; // file data
  string fName = argv[1]; // file name from command line

  // local/relative path myfile.txt
  // open file
  cout << "Openin file " << fName << endl;
  inFS.open(fName);

  // Checks to see if the file is open and prints that the file can't be found
  if (!inFS.is_open())
  {
    cout << "Could not open file " << fName << "." << endl;
    return 1;
  }

  cout << "Reading and printing numbers." << endl;

  // Goes through each line in the file to take the input from the line
  while (!inFS.eof())
  {
    inFS >> fileNum;
    if (!inFS.fail())
    {
      cout << "Num: " << fileNum << endl;
    }
  }

  cout << "Closing file " << fName << endl;

  // Done with file so close it
  inFS.close();

  return 0;
}
