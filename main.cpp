
#include <iostream>
#include "CGcalc.h"

int main(int argc, char** argv)
{

   int j = atoi(argv[1]);
   int m = atoi(argv[2]);
   int j1 = atoi(argv[3]);
   int m1 = atoi(argv[4]);
   int j2 = atoi(argv[5]);
   int m2 = atoi(argv[6]);

CGcalc cg = CGcalc();
double ans = cg.get_answer(j,m,j1,m1,j2,m2);
std::cout << ans << std::endl;
    return 0;
}
