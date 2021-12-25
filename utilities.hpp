#ifndef ADVENTOFCODE2021_1_UTILITIES_HPP
#define ADVENTOFCODE2021_1_UTILITIES_HPP
#endif //ADVENTOFCODE2021_1_UTILITIES_HPP
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readFile()
{
    int number;
    int previous;

    ifstream fileStream("../txt");
    int a = 0;
    int b = 0;
    if(!fileStream)
    {
        cout<<"Error opening output file"<<endl;
        system("pause");
        return -1;
    }
    while(!fileStream.eof())
    {
        getline(fileStream, line1[a], ' ');
        cout<<"1."<<line1[a]<<"\n";
        getline(fileStream, line2[b], ' ');
        cout<<"2."<<line2[b]<<"\n";
    }
}
