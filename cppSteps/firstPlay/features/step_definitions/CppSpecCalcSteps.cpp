#include "../../CppSpec/CppSpec.h"
#include "../../cucumber-cpp/defs.hpp"

struct CalcCtx
{
    Calculator calc;
    double result;
};

GIVEN("^I have entered (\\d+) into the calculator$")
{
    REGEX_PARAM(double, n);
    cucumber::ScenarioScope<CalcCtx> context;
    context ->calc.push(n);
}

WHEN("^I press add")
{
    cucumber::ScenarioScope<CalcCtx> context;
    context->result = context->calc.add();
}

THEN("^the result should be (.*)$")
{
    REGEX_PARAM(double, expected);
    cucumber::ScenarioScope<CalcCtx> context;
    specify(context->result, should.equal(expected));
}


