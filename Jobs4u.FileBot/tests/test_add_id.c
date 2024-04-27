#include "../FileBot/header.h"
#include "assert_test.h"


void test_add_id()
{
    // Test 1
    add_id(3);
    assert_test(processed_ids[2] == 3, "test_add_id 1.1");
    assert_test(num_ids == 3, "test_add_id 1.2");

    // Test 2
    add_id(4);
    assert_test(processed_ids[3] == 4, "test_add_id 2.1");
    assert_test(num_ids == 4, "test_add_id 2.2");
}


