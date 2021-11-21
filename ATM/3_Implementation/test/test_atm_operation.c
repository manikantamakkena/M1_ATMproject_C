#include "../unity/unity.h"
#include "../inc/atm_operation.h" /* Name of the header file of your project */

/* These two lines are need to be set according to project name */
#include "../inc/atm_operation.h"

#define PROJECT_NAME    "Atm"

/* Prototype / Function Declaration */
// Write all the function defined in the program.

void test_login(void);
void test_mainMenu(void);
void test_checkBalance(float balance);
float test_moneyDeposit(float balance);
float test_moneyWithdraw(float balance);
void test_menuExit(void);
void test_errorMessage(void);

/* Required by the unity test framework */

void setUp(){}

/* Required by the unity test framework */

void tearDown(){}

/* Start of the application test */

// Write the code for testing.

int main()
{
    /* Initiate the Unity Test Framework (Initiation) */

    UNITY_BEGIN();

    /*Now Run the Test function*/
    /* Means write the fucntion name for testing */

  RUN_TEST(test_login);
  RUN_TEST(test_mainMenu);
  RUN_TEST(test_checkBalance);
  RUN_TEST(test_moneyDeposit);
  RUN_TEST(test_moneyWithdraw);
  RUN_TEST(test_menuExit);
  RUN_TEST(test_errorMessage);



   /* Close the Unity Test Framework */
  return UNITY_END();

}

/* Write all the test functions. */
/* Here we have to write all the test cases means values for the program input that program is taking proper input and giving the desired result or not! */

void test_login(void); {
    TEST_ASSERT_EQUAL();
}

void test_mainMenu(void) {
    TEST_ASSERT_EQUAL();
}

void test_checkBalance(float balance) {
    
}

float test_moneyDeposit(float balance) {
    TEST_ASSERT_EQUAL();
}
