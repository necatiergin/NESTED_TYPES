//from cppreference.com

int x, y; // globals
class enclose // enclosing class
{
    // note: private members
    int x;
    static int s;
public:
    struct inner // nested class
    {
        void f(int i)
        {
            x = i; // Error: can't write to non-static enclose::x without instance
            int a = sizeof x; // Error until C++11,
            // OK in C++11: operand of sizeof is unevaluated,
            // this use of the non-static enclose::x is allowed.
            s = i;   // OK: can assign to the static enclose::s
            ::x = i; // OK: can assign to global x
            y = i;   // OK: can assign to global y
        }

        void g(enclose* p, int i)
        {
            p->x = i; // OK: assign to enclose::x
        }
    };
};
