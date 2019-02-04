//******************************************************************
// 
//  Name: Jacob Butch
//                                                                 
//  Class: StringChange
//                                                                  
//  Purpose:  To read in strings from a file and compare it to a
//	      string from the command line. If they are the same, 
//	      the string from the input file is outputted to an 
//	      output file as a second string from the command line.
//  
//******************************************************************
#ifndef STRINGCHANGE_H
#define STRINGCHANGE_H
#include <iostream>
#include <string>

using namespace std;

class StringChange
{
  public:
    // Constructor
    StringChange(string c_f, string c_t);

    // Function to output new string
    void change_string()const;

  private:
    string check_for;
    string change_to;
};

#endif
