#include <iostream>
#include <cstring> 

using namespace std;

int main() {
    string name;
    char name1;

    cout<<"enter your name: ";
    cin>>name;

    cout<<"enter your name1: ";
    cin>>name1;
    
    char* result = strchr(name.c_str(), name1);


    if (result != NULL) { 
    
        cout << "Position: " << (result - name.c_str()) << endl;
    } else {
        cout << "Character not found." << endl;
    }
}
