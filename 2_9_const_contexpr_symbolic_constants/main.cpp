#include <iostream>

double firstValue()
{
    std::cout << "Please enter your first number: " << std::endl;
    double x;
    std::cin >> x;
    return x;
}

double secondValue()
{
    std::cout << "Please enter your second number: " << std::endl;
    double y;
    std::cin >> y;
    return y;
}

int chooseOperator()
{
    std::cout << "Please select from the following" << std::endl;
    std::cout << "1 " << "\t+"<< std::endl;
    std::cout << "2 " << "\t-"<< std::endl;
    std::cout << "3 "<<"\t/" << std::endl;
    std::cout << "4 " <<"\t*"<< std::endl;
    int z;
    std::cout << "option select: ";
    std::cin >> z;
    return z;
    //char ch2(43)// addition
    //char ch3(45)// subtraction
    //char ch4(42)// multiplication

    //std::cin >> x;
    //if (x==1)
     //   return char ch1(47);// division


    //if (x == "+")
     //   return true;
    //if (x == "-")
    //    return true;
    //if (x =="/")
    //    return true;
    //if (x == "*")
     //   return true;
    //return false;
    //char ch1(47)// division
    //char ch2(43)// addition
    //char ch3(45)// subtraction
    //char ch4(42)// multiplication
}
int selectionConversion(int z)
{
    char ch1(47);// division
    char ch2(43);// addition
    char ch3(45);// subtraction
    char ch4(42);// multiplication


    if (z == 1)
        z = static_cast<int>(ch2);
        std::cout << char(z) <<std::endl;
        return z;
    if (z == 2)
        z = static_cast<int>(ch3);
        std::cout << char(z) <<std::endl;
        return z;
    if (z == 3)
        z = static_cast<int>(ch1);
        std::cout << char(z) <<std::endl;
        return z;
    if (z == 4)
        z = static_cast<int>(ch4);
        std::cout << char(z) <<std::endl;
        return z;


}



//bool selection()
//{
//    bool x;
//    if (x == "+")
//        return true;
//    if (x == "-")
//        return true;
//    if (x =="/")
//        return true;
//    if (x == "*")
//        return true;
//    return false;
//}

int main()
{
    //firstValue();
    //secondValue();
    //std::cout << "The sum of both numbers is " << selectionConversion(selectionConversion()) << firstValue() << secondValue();
    chooseOperator(selectionConversion())
    //std::cout << firstValue() << selectionConversion(int x) << secondValue();
    //selectionConversion(chooseOperator());
    //std::cout << firstValue() << chooseOperator() << secondValue() << std::endl;
    //firstValue()
    //secondValue();
    //std::cout << "Enter one of the following: +, -, /, *"

    return 0;


}
