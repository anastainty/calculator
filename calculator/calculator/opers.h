//
//  opers.h
//  calculator
//
//  Created by Anastasia Intyakova on 04.12.22.
//

#pragma once
#include <math.h>
#include <vector>
#include "funcs.h"

Operations operation_input() {
    std::cout << "\nChoose the operation: ";
    int oper;
    std::cin >> oper;
    return static_cast<Operations>(oper);
}

bool unary_binary(Operations oper) {
    switch (oper) {
    case Add:
            return true;
            break;
    case Substract:
            return true;
            break;
    case Multiply:
            return true;
            break;
    case Divide:
            return true;
            break;
    case Negate:
            return false;
            break;
    case Exp:
            return false;
            break;
    case Log:
            return false;
            break;
    case Sqrt:
            return false;
            break;
    case Pow:
            return true;
            break;
    case Sin:
            return false;
            break;
    case Cos:
            return false;
            break;
    case Tan:
            return false;
            break;
    case Cot:
            return false;
            break;
    case Arcsin:
            return false;
            break;
    case Arccos:
            return false;
            break;
    case Arctan:
            return false;
            break;
    case Arccot:
            return false;
            break;
    case Sh:
            return false;
            break;
    case Ch:
            return false;
            break;
    case Th:
            return false;
            break;
    case Cth:
            return false;
            break;
    default:
            return false;
            break;
    }
}

void apply_operation(Operations op,double a, double b) {
    switch (op) {
    case Add:
            std::cout << a << " + " << b << " = " << myAdd(a,b) << "\n";
            break;
    case Substract:
            std::cout << a << " - " << b << " = " << mySub(a,b) << "\n";
            break;
    case Multiply:
            std::cout << a << " * " << b << " = " << myMult(a, b) << "\n";
            break;
    case Divide:
            std::cout << a << " / " << b << " = " << myDiv(a, b) << "\n";
            break;
    case Pow:
            std::cout << a << "^" << b << " = " << myPow(a,b) << "\n";
            break;
    default:
            std::cout << "Error" << "\n";
            break;
    }
}
void apply_operation(Operations op,double a) {
    switch (op) {
    case Negate:
            std::cout << "-" << a << " = "<< myNeg(a) << "\n";
            break;
    case Exp:
            std::cout << "e^" << a << " = " << myExp(a) << "\n";
            break;
    case Log:
            std::cout << "log" << a << " = " << myLog(a) << "\n";
            break;
    case Sqrt:
            std::cout << "sqrt(" << a << ") = " << mySqrt(a) << "\n";
            break;
    case Sin:
            std::cout << "sin" << a << " = " << mySin(a) << "\n";
            break;
    case Cos:
            std::cout << "cos" << a << " = " << myCos(a) << "\n";
            break;
    case Tan:
            std::cout << "tan" << a << " = " << myTan(a) << "\n";
            break;
    case Cot:
            std::cout << "cot" << a << " = " << myCot(a) << "\n";
            break;
    case Arcsin:
            std::cout << "arcsin" << a << " = " << myArcsin(a) << "\n";
            break;
    case Arccos:
            std::cout << "arccos" << a << " = " << myArccos(a) << "\n";
            break;
    case Arctan:
            std::cout << "arctan" << a << " = " << myArctan(a) << "\n";
            break;
    case Arccot:
            std::cout << "arccot" << a << " = " << myArccot(a) << "\n";
            break;
    case Sh:
            std::cout << "sh" << a << " = " << mySh(a) << "\n";
            break;
    case Ch:
            std::cout << "ch" << a << " = " << myCh(a) << "\n";
            break;
    case Th:
            std::cout << "th" << a << " = " << myTh(a) << "\n";
            break;
    case Cth:
            std::cout << "cth" << a << " = " << myCth(a) << "\n";
            break;
    default:
            std::cout << "Error" << "\n";
            break;
        }
    }

void start_calc() {
    std::string exit;
    while (exit != "no") {
        std::cout << "0 = add, 1 = substract, 2 = multiply, 3 = divide, 4 = negate,\n 5 = exp, 6 = log, 7 = sqrt, 8 = pow, 9 = sin,\n 10 = cos, 11 = tan, 12 = cot, 13 = arcsin, 14 = arccos,\n15 = arctan, 16 = arccot, 17 = sh, 18 = ch, 19 = th, 20 = cth" << std::endl;
        Operations oper = operation_input();
        if (unary_binary(oper)) {
            double a, b;
            std::cout << "Enter the numbers: " << std::endl;
            std::cin >> a >> b;
            apply_operation(oper, a, b);
        }
        else {
            double a;
            std::cout << "Enter the number: " << std::endl;
            std::cin >> a;
            apply_operation(oper, a);
        }
        std::cout << "Do you want to continue?" << std::endl;
        std::cin >> exit;
        }
    }
