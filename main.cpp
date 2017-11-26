#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name;
    string last_name;
    string full_name;
    
    cout << "What is your First Name?\n";    
    cin >> first_name;
    cout << "What is your Last Name\n";
	cin >> last_name;
    full_name = first_name + ' ' + last_name;
    cout << "Your Full Name is: " << full_name << ".\n";
    
    for (int i=0;i<10;i++)
        {
             if (full_name[i] == 'a' || 
                 full_name[i] == 'e' ||     
                 full_name[i] == 'i' ||
                 full_name[i] == 'o' ||
                 full_name[i] == 'u')
                {
                    full_name[i] = 'z';
                }
        }
        
    cout << "Your Full Name converted is: " << full_name << ".\n";
    
	return 0;
}
