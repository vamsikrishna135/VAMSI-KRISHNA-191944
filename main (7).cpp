#include<iostream>
using namespace std;

int factorial(int n);                     //function prototype //

int main()
{
    int n;
void display (int n)
{
Cout<<Factorial of “<<n<<”=”<<factorial (n);
 }
    
    cout<<"First Monthly Assignment\n\n";
    
    cout<<"Enter a Positive integer to find the Factorial: ";  //Taking input from user //         
    cin>>n;
    
    display(n);
    return 0;
    }
    
    int factorial(int n)
    {
        if (n>1)                                             //Declaring recursive function //
        return n*factorial(n-1);
        else
           
           return 1;
}


