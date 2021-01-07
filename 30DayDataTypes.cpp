#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

int i2;
double d2;
string s2;
 //cin>>j>>k;
 //getline(cin, s1);
 //cout<<s1<<endl;
 //s1= Readline();
 
 //cout<<i+j<<"\n"<<(float)(k+d)<<"\n"<<s+s1<<endl;
  string tmp;

    getline(cin, tmp);
    i2 = stoi(tmp);

    getline(cin, tmp);
    d2 = stod(tmp);

    getline(cin, s2);

    // Print the sum of both integer variables on a new line.
    printf("%i\n", i + i2);

    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + d2);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + s2 << endl;

    
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}