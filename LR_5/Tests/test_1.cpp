//
// Created by Егор on 25.11.2021.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"
#include "E:\LR's\LR_5\Tasks.h"

using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test {
    public:
        ClassName obj;
        ClassDeclaration(){
            obj;
        }
    };
}
TEST(ClassDeclaration, Test1){
    long long n = 5;
    long double x[]
    {
        1, 1, 1, 1, 1
    };
    long double y[]
    {
        1, 1, 1, 1, 1
    };
    EXPECT_EQ(task_1(),1);
}
