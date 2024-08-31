#include <iostream>
using namespace std;

//types of constructor - default constructor
class student
{
    int rn;
    char n[50];
    double m1, m2, m3;
    public:
    student()
{
    cout<<"Enter the name: ";
    cin>>n;
    cout<<"Enter the roll no.: ";
    cin>>rn;
    cout<<"Enter the subject 1 marks: ";
    cin>>m1;
    cout<<"Enter the subject 2 marks: ";
    cin>>m2;
    cout<<"Enter the subject 3 marks: ";
    cin>>m3;
}

void display()
{
    cout<<endl;
    cout<<"Name: "<<n<<endl;
    cout<<"Roll No: "<<rn<<endl;
    cout<<"Marks for subject 1: "<<m1<<endl;
    cout<<"Marks for subject 2: "<<m2<<endl;
    cout<<"Marks for subject 3: "<<m3<<endl;
}
};
int main()
{
    student s1;
    s1.display();
}
