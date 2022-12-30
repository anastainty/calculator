//
//  funcs.h
//  calculator
//
//  Created by Anastasia Intyakova on 01.12.22.
//

#pragma once
#include <iostream>
#include <math.h>

enum Operations {
    Add,
    Substract,
    Multiply,
    Divide,
    Negate,
    Exp,
    Log,
    Sqrt,
    Pow,
    Sin,
    Cos,
    Tan,
    Cot,
    Arcsin,
    Arccos,
    Arctan,
    Arccot,
    Sh,
    Ch,
    Th,
    Cth
};

double myAdd(double a, double b) {
    return a + b;
}

double mySub(double a, double b) {
    return a - b;
}

double myMult(double a, double b) {
    return a*b;
}

double myDiv(double a, double b) {
    if (b == 0) {
        std::cout << "Error: division by zero" << std::endl;
        return 0;
    }
    else {
        return a / b;
    }
}

double myNeg(double a) {
    return (-1) * a;
}

double myRev(double a) {
    return 1 / a;
}

double myAbs(double a) {
    if (a >= 0) {
        return a;
    }
    else {
        return -a;
    }
}

double myPow(double a, double b) {
    return pow(a, b);
}

double myFact(double a) {
    if (a == 0) {
        return 1;
    }
    int n = 1;
    while (a > 0) {
        n *= a;
        --a;
    }
    return n;
}

double myExp(double a) {
    if (a==0) {
        return 1;
    }
    double k=0;
    int n = 0;
    while ((myPow(1,n)/myFact(n))>0.000001) {
        k+=myPow(1,n)/myFact(n);
        n++;
    }
    return myPow(k, a);
}

double myLog(double a) {
    return log(a);
}

double mySqrt(double a) {
    return myPow(a, 0.5);
}

double mySin(double a) {
    while (a > 6.283185307) {
        a -= 6.283185307;
    }
    double tmp = 0;
    int k = 1;
    double b = a;
    while (myAbs(a)>0.000001) {
        tmp += a;
        a =a* (-1) * b * b/(2*k + 1) / 2 / k;
            k++;
    }
    return tmp;
}

double myCos(double a) {
    while (a > 6.283185307) {
        a -= 6.283185307;
    }
    double tmp = 1;
    int k = 1;
    double b = a;
    a *= (-1)*(a / 2);
    while (myAbs(a) > 0.000001) {
        tmp += a;
        a *= b * b * (-1) / (2 * k + 1) / (2 * k + 2);
        k++;
    }
    return tmp;
}

double myTan(double a) {
    return mySin(a) / myCos(a);
}

double myCot(double a) {
    return myCos(a) / mySin(a);
}

double myArcsin(double a) {
    if (myAbs(a) > 1)
        return 0;
    double tmp = 0;
    int k = 0;
    double b = a;
    while (myAbs(a) > 0.000001) {
        tmp += a;
        a *= b*b*(2*k+1)*(2*k+1) / (2 * k + 2) / (2 * k + 3);
        k++;
    }
    return tmp;
}

double myArccos(double a) {
    return 1.570796326 - myArcsin(a);
}

double myArctan(double a) {
    if (a == 0) return 0;
    double tmp = 1.570796326;
    int k = 1;
    double b = (-1)/a;
    while (abs(b) > 0.000001) {
        tmp += b;
        b /= (-1) * a * a * (2 * k + 1);
        b *= (2 * k - 1);
        k++;
    }
    return tmp;
}

double myArccot(double a) {
    return 1.570796326 - myArctan(a);
}

double mySh(double a) {
    return ((myExp(a) - myExp((-1) * a)) / 2);
}

double myCh(double a) {
    return ((myExp(a) + myExp((-1) * a)) / 2);
}

double myTh(double a) {
    return mySh(a) / myCh(a);
}

double myCth(double a) {
    return 1 / myTh(a);
}
