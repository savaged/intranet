#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

#include "HtmlTagWriter.h"

using namespace std;
using namespace cgicc;

int main () 
{
    Cgicc cgi;
    
    outputStandardDocTop();

    outputH1Start();

    form_iterator fi = cgi.getElement("action");  
    if(!fi->isEmpty() && fi != (*cgi).end()) 
    {  
        cout << "Action requested: " << **fi << endl;  
    }
    else
    {
        cout << "Default" << endl;  
    }
    
    outputH1End();
    
	outputStandardDocTail();
    
    return 0;
}
