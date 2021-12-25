#ifndef utilities
#define utilities

#include <fstream>
#include <string>

using namespace std;

class FileReader {
    string fileLocation;
    int* array;

    public: FileReader(string fileLocation, int* array) {
        this->fileLocation = fileLocation;
        this->array = array;
    }

    /**
    * Function that reads lines from a file, into an array.
    * @param array Array to fill with results
    * @return Boolean, representing success or failure
    */
    bool readFile()
    {
        ifstream fileStream(fileLocation);
        string result;
        int counter = 0;

        if (!fileStream)
        {
            printf("%s", "Something failed");
            return false;
        }
        while(!fileStream.eof())
        {
            getline(fileStream, result);
            array[counter] = stoi(result);
            counter++;
        }
        return true;
    }
};

#endif


