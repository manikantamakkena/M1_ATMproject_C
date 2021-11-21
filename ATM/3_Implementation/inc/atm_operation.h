/**
 * @file atm_operation.h
 * @author zual (zual@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ATM_OPERATION_H
#define __ATM_OPERATION_H


#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <math.h>


/**
 * @brief declared function for login
 * 
 */

    int option;
    //float balance = 15000.00;
    int choose;

   // bool again = true;

void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();



#endif

/**
 * @brief end of function declaration
 * 
 */