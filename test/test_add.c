#include "add.h"
#include "unity.h"

void setUp(void){};
void tearDown(void){};

void test_add_plus(void) {
  TEST_ASSERT_EQUAL_INT(add(2, 3), 5);
  TEST_ASSERT_EQUAL_INT(add(2, 3), 5);
}

void test_add_minus(void) {
  TEST_ASSERT_EQUAL_INT(add(2, -3), -1);
  TEST_ASSERT_EQUAL_INT(add(2, -3), -1);
}
