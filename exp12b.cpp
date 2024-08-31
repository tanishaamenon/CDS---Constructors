#include <iostream>
using namespace std;

//defining the constructor outside the class
class student
{
    int rn;
    char n[50];
    float avg;
    public:
    student();
    void display();
};
student::student()
{
    cout<<"Enter the name: ";
    cin>>n;
    cout<<"Enter the roll no.: ";
    cin>>rn;
    cout<<"Enter the average: ";
    cin>>avg;
}
void student::display()
{
    cout<<endl;
    cout<<"Name: "<<n<<endl;
    cout<<"Roll No: "<<rn<<endl;
    cout<<"Average: "<<avg<<endl;
}
int main()
{
    student s1;
    s1.display();
}