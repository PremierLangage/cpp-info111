/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"

using namespace std;
CONST I1 = RANDOM_INT(251, 353);
CONST I2 = RANDOM_INT(251, 353);
CONST I3 = RANDOM_INT(251, 353);
CONST I4 = RANDOM_INT(251, 353);
CONST I5 = RANDOM_INT(251, 353);
/// END HIDDEN


// Completer la fonction dont voici la documentation :
/** Inverse l'affichage d'un entier en base 10 (exemple 356 devient 653)
 *  @param num: l'entier à inverser
 *  @return: l'inverse de l'entier
 **/
int reverse(int num){
/// BEGIN SOLUTION
  int rev=0, rem;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
  return rev;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main()
{
  int rev1 = reverse(I1);
  int rev2 = reverse(I2);
  int rev3 = reverse(I3);
  int rev4 = reverse(I4);
  int rev5 = reverse(I5);
  cout << "Reverse of " << I1 << " is " << rev1 << endl;
  cout << "Reverse of " << I2 << " is " << rev2 << endl;
  cout << "Reverse of " << I3 << " is " << rev3 << endl;
  cout << "Reverse of " << I4 << " is " << rev4 << endl;
  cout << "Reverse of " << I5 << " is " << rev5 << endl;
}
/// END HIDDEN
