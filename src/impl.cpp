#include "test.hpp"

int BaseType::x() {
    return value;
}

BaseType::BaseType(int v) : value(v) {}

int call_x_on(BaseType* x) {
    return x->x();
}
