#include "function.h"
#include <vector>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#if QUESTION == 0
TEST_CASE( "Factorials are computed", "[factorial]" ) {
    CHECK( factorial(1) == 1 );
    CHECK( factorial(2) == 2 );
    CHECK( factorial(3) == 6 );
    CHECK( factorial(10) == 3628800 );
    CHECK( factorial(0) == 1 );
}
#endif

#if QUESTION >= 1
TEST_CASE( "Sums are computed", "[sum]" ) {
    CHECK( sum(0, 0) == 0 );
    CHECK( sum(1, 2) == 3 );
    CHECK( sum(1, -2) == -1 );
}
#endif

#if QUESTION >= 2
TEST_CASE( "Odd square ums are computed", "[odd squared sum]" ) {
    CHECK( even_squared_sum(0) == 0 );
    CHECK( even_squared_sum(3) == 20 );
    CHECK( even_squared_sum(2500) == 20820835000 );
}
#endif

#if QUESTION >= 3
TEST_CASE( "Person ", "[personne]" ) {
    Person p0;

    #if QUESTION >= 5
        CHECK( p0.myname == "unknown" );
    #endif

    #if QUESTION >= 4
        p0.myname.clear();
        CHECK( p0.myname == "" );
    #endif

    #if QUESTION >= 6
        const Person p1("toto");
        CHECK( p1.myname == "toto" );
    #endif

    #if QUESTION >= 7
        CHECK( p0.name() == "" );
        CHECK( p1.name() == "toto" );
    #endif

    #if QUESTION >= 8
        p0.name() = "titi";
        CHECK( p0.name() == "titi" );
    #endif

    #if QUESTION >= 9
        const Student st;
        CHECK( st.name() == "unknown" );
    #endif
}
#endif

#if QUESTION >= 10
TEST_CASE( "exam", "[exam]" ) {
    ivec2 v0;
        CHECK(true);
    #if QUESTION >= 12
        CHECK( v0.mx == 0 );
        CHECK( v0.my == 0 );
    #endif
    #if QUESTION >= 13
        const ivec2 v1(1, 2);
        CHECK( v1.mx == 1 );
        CHECK( v1.my == 2 );
    #endif
    #if QUESTION >= 14
        CHECK( v1.x() == 1 );
    #endif
    #if QUESTION >= 15
        v0.x() = 3;
        CHECK( v0.mx == 3 );
    #endif
    #if QUESTION >= 16
        ivec2 v = v0+v1;
        CHECK( v.mx == 4 );
        CHECK( v.my == 2 );
    #endif
    #if QUESTION >= 17
        std::ostringstream os;
        os << v1;
        CHECK( os.str() == "(1,2)" );
        os << v1;
        CHECK( os.str() == "(1,2)(1,2)" );
    #endif
    #if QUESTION >= 18
            CHECK( dot(v0,v1) == 3 );
    #endif
    #if QUESTION >= 19
        ivecN<5> vv;
    #endif
    #if QUESTION >= 20
        CHECK( vv.tab[0] == 0 );
        CHECK( vv.tab[4] == 0 );
    #endif
    #if QUESTION >= 21
        vv.tab[4] = 1;
        CHECK( vv.sum_component() == 1 );
    #endif
    #if QUESTION >= 24
        const bike b;
        CHECK( b.nb_wheels() == 2 );
    #endif
    #if QUESTION >= 24
        const car c;
        CHECK( c.nb_wheels() == 4 );
    #endif
    #if QUESTION >= 25
        CHECK( check_wheels(b) == 2 );
        CHECK( check_wheels(c) == 4 );
    #endif
}
#endif