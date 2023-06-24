#include <iostream>


struct A{
virtual void call ( ) const { std::cout<<"A"<<std::endl ; }
};
struct B : A {
void call ( ) const { std::cout<<"B"<<std::endl ; }
};

B f1(B x) {x.call();return x;}  
// B& f2(B x) {x.call();return x;}
B f3(B& x) {x.call();return x;}
A& f4(B& x) {x.call();return x;}
// A& f5(B x) {x.call();return x;}
A f6(B& x) {x.call();return x;}
A f7(A& x) {x.call();return x;}
A& f8(A& x) {x.call();return x;}
A f9(A x) {x.call();return x;}

template <typename T>
T f10(T x){x.call;return x;}
template <typename T>
T f11(T& x){x.call;return x;}
template <typename T>
T& f12(T& x){x.call;return x;}


