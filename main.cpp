#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

void verify_Entry(){

    cout << "Enter a number: " ;            //Get user input
    double userInput = 0.0;
    cin >> userInput;

    if (cin.fail()){            //Check to verify user entered a number
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Invalid entry" << endl;
        verify_Entry();
    }else{
        //Declare and Initialize power functions
        double square = (userInput * userInput);
        double cubed = (userInput * userInput * userInput);
        double fourth = pow(userInput,4);

        //Display to console
        cout << "Squared: " << square << endl;
        cout << "Cubed: " << cubed << endl;
        cout << "Fourth: " << fourth << endl;
    }


}

int main(int argc, char *argv[]) {

    verify_Entry(); //Get and check user input

    return 0;
}