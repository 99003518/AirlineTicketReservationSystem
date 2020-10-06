
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <airline_operations.h>
#define PROJECT_NAME    "Airline"

/* Prototypes for all the test functions */
void userLogin (void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "userLogin", test_userLoginlogin);


  CU_basic_set_mode(CU_BRM_VERBOSE);


  CU_basic_run_tests();


  CU_cleanup_registry();

  return 0;
}

void test_userLogin(void) {
  CU_ASSERT(1 == userLogin("user", "pass"));

  /* Dummy fail*/
  CU_ASSERT(1 == userLogin("user","passs"'));
}

