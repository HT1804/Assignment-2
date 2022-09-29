/**
 * @file operation.h
 * @brief The decoration for operation file
 * @author Hoa Than - 487272
 * @since September 2022
 * @version V1.1
 */
#ifndef PROJECT_2_OPERATION_H
#define PROJECT_2_OPERATION_H
/**
 * @brief This is the decoration for the operation
 * @param var1 is the first variable for the computation
 * @param var2 is the second variable for the computation
 */

class calculator{
    float var1;
    float var2;
public:
    calculator();
    void setVar1(float a);
    float getVar1();
    void setVar2(float b);
    float getVar2();

    float addition();
    float subtraction();
    float multiplication();
    float division();
    void askNum(float a, float b);
};

#endif