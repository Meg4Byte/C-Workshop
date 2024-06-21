#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>

class MyClass
{
    public:
        MyClass();
        int myVar;
        int count;

        void helloFriend()
        {
            std::cout<<"HELLO FRIEND!That is lame"<<std::endl;
        }

        void fSociety()
        {
            std::cout<<"F*** Society!"<<std::endl;
        }

        int addNums(int a , int b)
        {
            return a + b;
        }

};

#endif //MYCLASS_H
