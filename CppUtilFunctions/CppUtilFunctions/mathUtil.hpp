//
//  mathUtil.hpp
//  CppUtilFunctions
//
//  Created by shaoxiong on 9/30/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#ifndef mathUtil_hpp
#define mathUtil_hpp

#include <stdio.h>
#include <cmath>

class fraction{
public:
    int n;
    int d;
    fraction(int numerator, int denominator);
    bool operator==(const fraction &a) const;
};

int gcd(int a, int b);

#endif /* mathUtil_hpp */
