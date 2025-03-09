#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;


/*int main ( )
{
ifstream inputfile;
string filename;
string words;

//Get the file
for (int i = 0; i < 5; i++)
{
for (int i = 0; i < 5; i++)
{
cout << "Enter the filename: ";
cin >> filename;
// Open the input file.
inputfile.open(filename.c_str());

char word[30];
int count; count=0;
while(!inputfile.eof())
{
inputfile>>word;
count++;
}

cout << "Number of words in file "<< i+1 << " are " << count << endl;

inputfile.close();
    if (count == 0)
    {
//Display an error message.
cout << "Error opening the file.\n";
    }

}

}
}
*/
//opens and reads what is in file

int main(){
   string filename;
   string ostring;
   fstream inputfile;
   ofstream outputfile;
   string word;
    
    
int choose;
cout << "which poem?" << endl;
cout << "1. Good Timber" << endl;
cout << "2. The Road Not Taken" << endl;
cout << "3. If I Can Stop One Heart From Breaking" << endl;
cout << "4. Life has loveliness to sell," << endl;
cin >> choose;


switch(choose){

    case 1:
filename = "poem1.cpp";
ostring = "poem1new.txt";
break;
    case 2:
filename = "poem2.cpp";
ostring = "poem1new.txt";
break;

    case 3:
filename = "poem3.cpp";
ostring = "poem1new.txt";
break;

    case 4:
filename = "poem4.cpp";
ostring = "poem1new.txt";
break;

default:
    cout << "invalid number" << endl;
    
}

cout << choose << endl;
cout << endl;
   inputfile.open(filename.c_str());  // open a file to perform write operation using file object
    // check if opening a file failed
    
    if (inputfile.fail()) {
        cerr << "Error opening input file" << endl; // character error
        inputfile.close();
        exit(1);
    }
    

    // open the output file stream
    outputfile.open(ostring.c_str());
    // check if opening a file failed
    
    if (outputfile.fail()) {
        cerr << "Error opening output file" << endl; // character error
        outputfile.close();
        exit(1);
    }
string line;
while( getline( inputfile, line ))
{
    stringstream s(line);  
    string num; 
   
    int count = 0; 
    while (s >> num) 
        count++;

     outputfile << count;
     outputfile << " " << line << endl;

}
 // close the file stream
    inputfile.close();
    outputfile.close();
}

/*ifstream inFile;
    // open the file stream
    inFile.open(".\\test.txt");
    // check if opening a file failed
    if (inFile.fail()) {
        cerr << "Error opeing a file" << endl;
        inFile.close();
        exit(1);
    }
    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    // close the file stream
    inFile.close();
*/


//counts each line in string
/*int main()
{
    ifstream inFile;
    // open the file stream
    inFile.open(".\\test.txt");
    // check if opening a file failed
    if (inFile.fail()) {
        cerr << "Error opeing a file" << endl;
        inFile.close();
        exit(1);
    }
    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    // close the file stream
    inFile.close();
}
*/