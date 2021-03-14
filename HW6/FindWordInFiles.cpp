#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    if(argc > 3)
    {
        cout <<"Number of arguments exceeded! Try another number of arguments\n";
        return 0;
    }
    string strfromterminal = argv[2];
    fstream File;
    File.open(strfromterminal);
    if(File)
    {
        string strfromfile;
        getline(File, strfromfile, '\n');
        
        
        size_t found = strfromfile.find(argv[1]);
        if(found!=std::string::npos)
        {  
            cout << argv[1] << " found into file " << strfromterminal <<"!\n";
        }else{
            cout << argv[1] << " not found into file " << strfromterminal <<"!\n";
        }
        File.close();
        return 0;
    }else{
        cout << "File " << strfromterminal << " not found!\n";
    }
    File.close();
    return 0;
}

