/**
 * @file operation.cpp
 * @brief The function definitions
 * @author Hoa Than - 487272
 * @since September 2022
 * @version V1.1
 */
#include "operation.h"
#include <math.h>
#include <iostream>

/**
  * @param var1 initialize to 0
  * @param var2 initialize to 1
  */
calculator::calculator() {
    var1 = 0;
    var2 = 1;
}
/**
 * @brief Setter function to private member Var1
 * @param x is assigned to var1
 * @see calculator::setVar2()
 */
void calculator::setVar1(float x) {
    var1 = x;
}
/**
 * @brief Getter function to private member Var1
 * @return return the value of var1
 * @see calculator::getVar2()
 */
float calculator::getVar1() {
    return var1;
}
/**
 * @brief Setter function to private member Var2
 * @param y is assigned to var2
 */
void calculator::setVar2(float y) {
    var2= y;
}
/**
 * @brief Getter function to private member Var1
 * @return return the value of var1
 */
float calculator::getVar2() {
    return var2;
}
/**
 * @brief Function to add two numbers
 * @return return the sum of two numbers
 * @see calculator::subtraction(), calculator::multiplication(), calculator::division()
 */
float calculator::addition() {
    return getVar1()+getVar2();
}
/**
 * @brief Function to subtract of two numbers
 * @return return the subtraction of two numbers
 * @see calculator::multiplication(), calculator::division()
 */
float calculator::subtraction() {
    return getVar1()-getVar2();
}
/**
 * @brief Function to multiplication of two numbers
 * @return return the multiplication of two numbers
 * @see calculator::division()
 */
float calculator::multiplication() {
    return getVar1()*getVar2();
}
/**
 * @brief Function to divide two numbers
 * @return return the division of two numbers
 * @note var2 cannot be 0. If var2 equals to 0, the result is infinity
 */
float calculator::division() {
    if (var2==0){
        std::cout <<"Invalid"<< std::endl;
        return INFINITY;
    }else
        return getVar1()/getVar2();
}
/**
 * @brief This asks the user the numbers they want to calculate
 * @param x This is the first entered number by user
 * @param y This is the second entered number by user
 * @note x&y will be set to var1 and var2
 */
void calculator::askNum(float x, float y) {
    std::cout << "Please enter your first number: ";
    std::cin >> x;
    setVar1(x);
    std::cout << "Please enter your second number: ";
    std::cin >> y;
    setVar2(y);
}