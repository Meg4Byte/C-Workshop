
#include <iostream>
using namespace std;
//#include "make_a_class.h"
//include <format>

//class Human;


class Human
{
    public :

        string name;
        string lastName;
        string sex;
        int age;
        double height;
        bool isAlive;
        bool isMarried;
        bool hasChildren;


        void eat()
        {
            cout<<"I am eating\n";
        }

        void sleep()
        {
            cout<<"I am sleeping\n";
        }

        void introduceMyself(string name , string lastname)
        {

            //string formatedStr = format("hi my name is {} my last name is {}\n" , name , lastname )
            //cout<< formatedStr << endl;

            cout << "hi my name is " <<name<< " my last name is " <<lastname<< endl;

        }


};

class Student 
{
    public :
        string name;
        int age;
        double avgGrade;

    Student(string name_1 , int age_2 , double avgGrade_3 )
    {
        name = name_1;
        age = age_2;
        avgGrade = avgGrade_3;
        
    }

};




int main()

{

    /*

    Human h1;
    h1.name = "vinko";
    cout << h1.name << endl;
    */
    //cout<<"HELLO WORLD";

    Human h1;
    h1.name = "vinko";
    h1.lastName = "vinkovic";

    cout<<h1.name<<endl;
    cout<<h1.lastName<<endl;

    h1.introduceMyself(h1.name,h1.lastName);
    h1.eat();
    h1.sleep();

    /*
    Student s1 = Student("micko" , 24 , 9.4);
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.avgGrade<<endl;
    */


    string names[] = {"A", "B", "C"};


    for (string item : names)
    {
        Student s = Student(item , 25 , 10);
        cout<<s.name<<endl;
        cout<<s.age<<endl;
        cout<<s.avgGrade<<endl;
    }
    

    
 

    return 0;
}






