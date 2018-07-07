/// BEGIN HIDDEN
#define ASSERT(test) if (!(test)) std::cout << "Test failed: " #test << std::endl
#include<iostream>
int main() {
/// END HIDDEN
     int I;
     // Initialiser I à la valeur CI1
     /// BEGIN SOLUTION
     I = CI1;
     /// END SOLUTION
/// BEGIN HIDDEN
     ASSERT( I == CI1 );
}
/// END HIDDEN
