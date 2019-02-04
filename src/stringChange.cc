//******************************************************************* 
//                                                                    
//  Program:     stringChange                            
//                                                                     
//  Author:      Jacob Butch                                       
//                                                                    
//  Description: The implementation file of the stringChange class
//		 functions.
//  
//  Date:	 28 January 2019
//                                                                    
//*******************************************************************

#include <iostream>
#include <string>
#include "../include/stringChange.h"

using namespace std;

//*******************************************************************                                 
//  Function:	StringChange                                                                  
//  
//  Purpose:	The constructor for the StringChange class that sets
//		'check_for' to 'c_f' and 'change_to' to 'c_t'.                                       
//*******************************************************************
StringChange::StringChange(string c_f, string c_t)
{
  check_for = c_f;
  change_to = c_t;
}

//*******************************************************************                                 
//  Function:	change_string                                                                  
//  
//  Purpose:	Reads in 'source' from an input file and compares it
//		to 'check_for', if they are the same string, the
//		string 'change_to' is outputted, either to the 
//		console or to an output file.                                     
//*******************************************************************
void StringChange::change_string()const
{
  string source;
  while (getline(cin, source))
  {
    if(check_for == source){cout << change_to << endl;}
  }
}
