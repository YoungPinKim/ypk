//
//  main.cpp
//  Prectice_1
//
//  Created by ypkim on 2018. 8. 7..
//  Copyright © 2018년 ypkim. All rights reserved.
//

#include <iostream>


class testClass
{
    private:
        int num1;
        int num2;
    
    public:
    void setNum();
        void testPrint();
};

void testClass:: testPrint()
{
    std::cout<<"num1 : " <<num1<<"num 2 : " << num2;
};
void testClass::setNum()
{
    num1 = 1;
    num2 = 2;
};

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    
    testClass test;
    test.setNum();
    test.testPrint();
    
    return 0;
}
