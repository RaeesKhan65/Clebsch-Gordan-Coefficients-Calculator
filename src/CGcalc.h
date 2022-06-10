#ifndef CGCALC_H
#define CGCALC_H


class CGcalc{

public:
    CGcalc();
   ~CGcalc();

    void get_inputs(int j, int m,
    int j_1,int m_1,int j_2,int m_2);

    void  wigner_eckart_check(int j, int m,int j1,int m1,int j2,int m2);

//Variables
   int j;
   int m;
   int j1;
   int m1;
   int j2;
   int m2;
   double answer;






};


















#endif // CGCALC_H
