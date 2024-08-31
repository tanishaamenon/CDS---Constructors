#include <iostream>
using namespace std;

//types of constructor - parameterized constructor
class maxop
{
    public:
    maxop(int a, int b)
{
    cout<<"First Number: "<<a<<endl;
    cout<<"Second Number: "<<b<<endl;
    cout<<endl;
    if (a>b)
    {
        cout<<"The first number is greater than the second.";
    }
    else if (b>a)
    {
        cout<<"The second number is greater than the first. ";
    }
    else
    {
        cout<<"Both numbers are equal. ";
    }
}
};

int main()
{
    maxop n1(23,76);
}
