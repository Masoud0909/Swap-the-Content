/*Write a void function void swap (int &x, int &y) {…}
that takes two integers as parameters, and swaps (interchanges) their contents. Write the following main to
check that it works (please don’t copy the code and paste, it won’t work). Then remove the “&” from the
function formal parameter list and test what happens.
*/
#include <iostream>

using namespace std;

int x, y;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "x = " << x << endl;
    cout << "y = " << y;
}

int main()
{
    cout << "Enter two integers to SWAP their order: ";
    cin >> x >> y; 
    int temp;
    swap(x, y);

    // The point is that if we remove the&, nothing swaps nothing changes* /
    // Becuase by & we are passing the value by reference means the exact value changes     not the copy of it;
    // because if we remove & changes made to the parameters inside the function won't affect the original variables in the main function.
    // because & access es the location memory address of the variable or value and changes that directly by changing the address;

}
