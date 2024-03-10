class Enc
{
    class A;    // forward declaration
    class B;    // forward declaration
    class A{};  // definition of nested class
};

class Enc::B{}; // definition of nested class
