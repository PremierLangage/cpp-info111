/// BEGIN HIDDEN
#define ASSERT(test) if (!(test)) std::cout << "Test failed: " #test << std::endl
#include<iostream>
int main() {
/// END HIDDEN
     int i;
     // Initialiser i à la valeur 42
     /// BEGIN SOLUTION
     i = 42;
     /// END SOLUTION
/// BEGIN HIDDEN
     ASSERT( i == 42 );
}
/// END HIDDEN
