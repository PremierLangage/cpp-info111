/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"

using namespace std;
CONST I1 = RANDOM_INT(251, 353);
/// END HIDDEN


// Completer la fonction dont voici la documentation :
/** Inverse l'affichage d'un entier (exemple 356 devient 653)
 *  @param num: l'entier à inverser
 *  @return: l'inverse de l'entier
 **/
/// BEGIN SOLUTION
int reverse(int num){
  int rev=0, rem;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
  return rev;
}
/// END SOLUTION
/// BEGIN INITSOLUTION
/// int reverse(int num) {
///   /* Completer ici. */
/// }
/// END INITSOLUTION

/// BEGIN HIDDEN
int main()
{
  int rev = reverse(I1);
	cout << "Reverse = " << rev;
}
/// END HIDDEN
