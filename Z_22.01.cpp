#include <iostream>
using namespace std;
class Employee
{
private:
string surname;
int numberofhoursworked;
int hourlywages;
int experience;
public:
Employee(string surname, int numberofhoursworked, int hourlywages,int experience)
{
this-> surname=surname;
this-> numberofhoursworked=numberofhoursworked;
this->hourlywages=hourlywages;
this-> experience=experience;
}
void Display()
{
cout<<"Surname: "<<surname<<endl;
cout<<"Number of hours worked: "<<numberofhoursworked<<endl;
cout<<"Hourly wages: "<<hourlywages<<endl;
cout<<"Experience: "<<experience<<endl;
}
};
int main()
{
Employee Employee1("Ivanov",8,1000,20);
Employee1.Display();
}