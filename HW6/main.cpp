#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void CreateFiles();
void MergeToFile();

int main(){
    
    CreateFiles();
    MergeToFile();

    return 0;
}

void CreateFiles()
{
    ofstream ex1_file1;
    ex1_file1.open("ex1_file1.txt");
    if(!ex1_file1)
    {
        cout << "Couldn`t be open the file!";
    }else 
    {   
        cout << "File ""ex1_file1.txt"" created\n";
        for(int i=0; i < 9; i++)
        {
            ex1_file1 << "ex1_file1";
        }
        
    }
    ex1_file1.close();

    ofstream ex1_file2;
    ex1_file2.open("ex1_file2.txt");
    if(!ex1_file2)
    {
        cout << "Couldn`t be open the file!";
    }else 
    {   
        cout << "File ""ex1_file2.txt"" created\n";
        for(int i=0; i < 9; i++)
        {
            ex1_file2 << "ex1_file2";
        }
        
    }
    ex1_file2.close();   

}

void MergeToFile()
{
    ifstream ex2_file1;
    ex2_file1.open("ex1_file1.txt");
    ifstream ex2_file2;
    ex2_file2.open("ex1_file2.txt");
    string* str1 = new  string[100]; 
    string* str2 = new  string[100];

    getline(ex2_file1, *(str1));
    getline(ex2_file2, *(str2));
    ex2_file1.close();
    ex2_file2.close();

    ofstream ex2_mergefile;
    ex2_mergefile.open("ex2_mergefile.txt");
    ex2_mergefile << *str1 << *str2;
    ex2_mergefile.close();
    
    delete [] str1;
    delete [] str2;
    cout << "Files merged\n";
}