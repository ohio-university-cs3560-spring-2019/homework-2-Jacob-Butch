//******************************************************************* 
//                                                                    
//  Program:     main                             
//                                                                     
//  Author:      Jacob Butch
//  Email:	 jb242416@ohio.edu                                      
//                                                                    
//  Description: The main for the utilization of the StringChange
//	  	 class to change one string from the command line to
//		 another string from the command line with the use of
//		 input and output files.
//  
//  Date:	 28 January 2019
//                                                                    
//*******************************************************************
#include <iostream>
#include <string>
#include "../include/stringChange.h"

using namespace std;

int main(int argc, char** argv)
{
  StringChange s(argv[1], argv[2]);
  s.change_string();

  return (0);
}
