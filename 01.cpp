#include <iostream>
using namespace std;

int main () { 
    double annualsalary ;
    cout << "Please enter you annual salary " << endl;
    cin >> annualsalary;
    double mountlysalary = annualsalary / 12;
    cout << "your mounthly salary is " << mountlysalary << endl;
    cout << " In 10 years you will have "<< annualsalary * 10 ;

    char character = 'a';
    cin >> character;
    cout << "your values is " << character;
    int yearofbirth; 
    cout << " Please enter your year of birth " << endl;
    cin >> yearofbirth;
    cout << " Please enter your gender " << endl;
    char gender;
    cin >> gender;
    bool isolderthan18 = true;
    float averagegrade = 4.5; 
    double balance = 32472574357827;

    cout << "Size of int is "<< sizeof(int) << "bytes\n";


    system("pause>0");
};

