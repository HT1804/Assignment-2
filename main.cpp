/**
 * @file main.cpp
 * @brief This is the application for DoxyProject
 * @author Hoa Than - 487272
 * @since September 2022
 * @version V1.1
 */

#include <iostream>
#include "operation.h"

int main() {
    int ch;
    float p=0;
    float q=0;
    calculator cal;
    cal.askNum(p,q);

    std::cout<< "Enter 1 to add 2 numbers" <<
                "\nEnter 2 to subtract 2 numbers" <<
                "\nEnter 3 to multiply 2 numbers" <<
                "\nEnter 4 to divide 2 numbers" <<
                "\nEnter 0 to exit";
    // print out the result
    do {
        std::cout << "Please enter your choice: "<< std::endl;
        std::cin >> ch;
        switch (ch){
            case 1:
                std::cout << "Result is: " << cal.addition() <<std::endl;
                break;
            case 2:
                std::cout << "Result is: " << cal.subtraction() <<std::endl;
                break;
            case 3:
                std::cout << "Result is: " << cal.multiplication() <<std::endl;
                break;
            case 4:
                std::cout << "Result is: " << cal.division() <<std::endl;
                break;
        }
    }while (ch >= 1 && ch <= 4);
    return 0;
}
