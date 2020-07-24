struct BaseType {
    int value;
    virtual int x();
    BaseType(int v);
};

int call_x_on(BaseType* x);
