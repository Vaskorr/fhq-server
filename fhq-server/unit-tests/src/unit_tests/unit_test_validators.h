#ifndef UNIT_TEST_VALIDATORS_H
#define UNIT_TEST_VALIDATORS_H

#include <unit_tests.h>

class UnitTestValidators : public UnitTestBase {
    public:
        UnitTestValidators();
        virtual void init();
        virtual bool run();
};

#endif // UNIT_TEST_VALIDATORS_H