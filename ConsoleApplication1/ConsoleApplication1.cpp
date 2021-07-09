#include <iostream>
#include <fstream>

using namespace std; 

int main(int argc, char* argv[])
{
    char filename[] = "Balances.txt";
    char buff[100];
    ifstream infile(filename);

    infile.open(filename);
    if (infile.fail())
    {
        cout << "Unable to open " << filename << endl;
        return 1;
    }

    while (!infile.eof())
    {
        infile.getline(buff,100);
        cout << buff << endl;
    }
    infile.close();
    return 0; 
}

