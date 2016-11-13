//
//  mathUtil.cpp
//  CppUtilFunctions
//
//  Created by shaoxiong on 9/30/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#include "mathUtil.hpp"

int gcd(int a, int b){
    int big, small;
    a > b ? (big = a, small = b) : (big = b, small = a);
    while(small){
        int tmp = small;
        small = big%small;
        big = tmp;
    }
    return big;
}

fraction::fraction(int numerator, int denominator){
    int gcdNum = gcd(numerator, denominator);
    n = numerator/gcdNum;
    d = denominator/gcdNum;
}

bool fraction::operator==(const fraction &a) const{
    return d == a.d && n == a.n;
}