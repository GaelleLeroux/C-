#include <iostream>
#include <list>


using std::list;
using std::cout;
using std::endl;

int main(){
    list<int> A = {1,2,3,4,5,6,7,8};
    
    auto it = A.begin();
    advance(it,2);
    A.erase(it);
    for (auto& valeur : A){
        cout<<valeur<<" ";
    }
    cout<<endl;

}