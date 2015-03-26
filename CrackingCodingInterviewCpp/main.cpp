//
//  main.cpp
//  CrackingCodingInterviewCpp
//
//  Created by  Zhongrui Li on 2015-03-26.
//  Copyright (c) 2015  Zhongrui Li. All rights reserved.
//

#include <iostream>
#include "stringHelper.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    stringHelper strHp;
    char a[] = "asdfhiwuhfeiuasvuda";
    strHp.reverse(a);
    
    std::cout << a;
    return 0;
}
