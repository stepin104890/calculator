
#include<stdio.h>
#include "subtraction.h"
#include "add.h"
#include "cuberoot.h"
#include "divide.h"
#include "exponential.h"
#include "modular_division.h"
#include "multiplication.h"
#include "percentage.h"
#include "squareroot.h"
#include "unity/unity.c"
#include "unity/unity.h"
#include "unity_internals.h"


void setUp(){}

void tearDown(){}


void test_cuberoot(void)
{
    //TEST_ASSERT_EQUAL(0.000000, cuberoot(0);
    TEST_ASSERT_EQUAL(5.000000, cuberoot(125));
    //TEST_ASSERT_EQUAL(4.641589, cuberoot(100);
}
void test_percentage(void)
{
    TEST_ASSERT_EQUAL(15, percentage(15,100));
    //TEST_ASSERT_EQUAL(20, percentage(20, 100));
    //TEST_ASSERT_EQUAL(3.90, percentage(15, 26));
    
    //TEST_ASSERT_EQUAL(30, percentage(15,100));
    //TEST_ASSERT_EQUAL(3.0, percentage(15,26));
}

void test_add(void)
{
    TEST_ASSERT_EQUAL(12, add(4,8));
    TEST_ASSERT_EQUAL(-30, add(-50, 20));
    TEST_ASSERT_EQUAL(12.4, add(8.2, 4.2));
}
void test_divide(void)
{
    TEST_ASSERT_EQUAL(3, divide_int(9,3));
    TEST_ASSERT_EQUAL(0, divide_int(0,1));
    TEST_ASSERT_EQUAL(2.45, divide_float(10.3,4.2));
}
void test_exponential(void)
{
    TEST_ASSERT_EQUAL(2.178000, exponential(1);
    TEST_ASSERT_EQUAL(1.000000, exponential(0));
    TEST_ASSERT_EQUAL(0.367918, exponential(-1);
   
}
void test_modular_division(void)
{
    TEST_ASSERT_EQUAL(4, modular_division(4,8));
    TEST_ASSERT_EQUAL(0, modular_division(10,5));
    TEST_ASSERT_EQUAL(1.9, modular_division(10.3, 4.2);
}
void test_multiplication(void)
{
    TEST_ASSERT_EQUAL(20,multiplication(4,5))
    TEST_ASSERT_EQUAL(43.800003,multiplication(6,7.3))
    TEST_ASSERT_EQUAL(15.400000,multiplication(2.2,7))
}

void test_squareroot(void)
{
    TEST_ASSERT_EQUAL(2, squareroot(4);
    TEST_ASSERT_EQUAL(0, squareroot(0));
    TEST_ASSERT_EQUAL(1.581, squareroot(2.5);
}
void test_subtraction(void){
    TEST_ASSERT_EQUAL(1,subtraction(2,1));
}


int test_main(void){


    UNITY_BEGIN();


    RUN_TEST(test_add());
    RUN_TEST(test_divide());
    RUN_TEST(test_exponential());
    RUN_TEST(test_modular_division());
    RUN_TEST(test_multiplication());
    RUN_TEST(test_squareroot());
    RUN_TEST(test_subtraction());
   
    

    return UNITY_END();
}
