#ifndef CGCALC_H
#define CGCALC_H


class CGcalc{

public:
    CGcalc();
   ~CGcalc();


    double answer;
    bool  wigner_eckart_check(int j, int m,int j1,int m1,int j2,int m2);
    double get_answer(int j, int m,int j1,int m1,int j2,int m2);






};


















#endif // CGCALC_H
