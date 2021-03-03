#include <iostream>
using namespace std;

int main() 
{
    
    int mark ;
    
	// input from the user
	cout <<"plz enter your mark \n";

    cin >> mark ;
    
    if(mark>=90&&mark<=100)
    {
        cout<< "Your grade is A \n";
    }
    else if(mark>=80&&mark<90) 
    {
    	cout <<"Your grade is B \n";
    }
    else if(mark>=70&&mark<80) 
    {
    	cout <<"Your grade is C \n";
    }
    else if(mark>=60&&mark<70) 
    {
    	cout <<"Your grade is D \n";
    }
    else
    {
        cout <<" you failed \n";
    }
    
	
	return 0;
}
