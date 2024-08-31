#include<iostream>
#include<string.h>
using namespace std;

//types of constructors - copy constructor
class student
{
    int rn;
    char n[50];
    float avg = 0;
    public:
    student(int,char[],float);

    student(student &t)
    {
        rn=t.rn;
        strcpy(n,t.n);
        avg=t.avg;
    }
    void display();

};

 student::student(int rno,char na[],float av)
 {
    rn=rno;
    strcpy(n,na);
    avg=av;
 }

void student::display()
 {
    cout<<endl;
    cout<<"Name: "<<n<<endl;
    cout<<"Roll No: "<<rn<<endl;
    cout<<"Average: "<<avg<<" %"<<endl;
 }

int main()
{
    student s1(36,"Lewis",93.7);
    s1.display();

    student lewis(s1);
    lewis.display();

    return 0;
}