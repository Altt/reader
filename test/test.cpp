#include <gtest/gtest.h>
#include "../src/Model.h"


TEST(reader_model_test, canCreateModel) {
    Model *model = NULL;

    model = new Model();
    ;
    ASSERT_NE(NULL, model);
}