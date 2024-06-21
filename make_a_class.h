#ifndef HUMAN_H
#define HUMAN_H


using namespace std;

class Human
{

    public:

        string name;
        string lastName;
        string gender;
        string sex;
        int age;
        double height;
        string occupation;
        double weight;
        double bmi;
        string ID;
        string bloodType;
        string phoneNumber;
        string email;
        string address;
        string city;
        string state;
        string country;
        string zipCode;
        string birthDate;
        string maritalStatus;
        int numberOfChildren;
        bool hasChildren;
        bool isEmployed;
        string employer;
        bool collegeDeg;
        string college;
        string major;
        string minor;
        string degree;
        string elementarySchool;
        string middleSchool;
        bool hasParrents;
        string parrent1;
        string parrent2;
        bool hasSiblings;
        int numberOfSiblings;


    void eat()
    {
        cout<< "I am eating\n";
    }

    void sleep()
    {
        cout<< "I am sleeping\n";
    }

    void play()
    {
        cout<<"I am playing\n";
    }

    void myName(string name)
    {
        cout<<"Hi , my name is "<<name<<endl; //???
    }



};

#endif // HUMAN_H