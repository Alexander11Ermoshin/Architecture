#include<iostream>
#include <fstream>
#include<vector>
#include<String>
using namespace std;

namespace ReadFile
{

template<typename T>    
class Read
{
vector<T> _OriginalText;
string _name;
const char _SeparationSign = "="; //// ???????
const unsigned int _SeparationValue = 61;

public:
    Read(); // nullptr
    Read(const Read &other); //copy constructor
    //Read(); //move constructor ????????
    ~Read(); // Destructor

    T ReadFile(Read value /*????????????*/);
    T TypeDefinition ();
    T Hashing (Read value1);
    void NameRepetitionCheck ();
    bool FormatCheck();

protected:
T result(); // protected?
};

}


template <typename T>
ReadFile::Read<T>::Read(const Read &other)
{}

template <typename T>
ReadFile::Read<T>::Read() ///////?????????????
{
    cout <<"please enter the text as shown below: variable name=variable value " << endl;
}

template <typename T>
ReadFile::Read<T>::~Read()
{
}
