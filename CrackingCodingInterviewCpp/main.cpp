//
//  main.cpp
//  CrackingCodingInterviewCpp
//
//  Created by  Zhongrui Li on 2015-03-26.
//  Copyright (c) 2015  Zhongrui Li. All rights reserved.
//

#include <iostream>
#include <fstream>

#include "stringHelper.h"
#include "printLastKLines.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    stringHelper strHp;
    /*char a[] = "asdfhiwuhfeiuasvuda";
    strHp.reverse(a);
    
    std::cout << a;
    return 0;*/
    ifstream fin("/Users/GODLZR/Workspace/Xcode_Workspace/CrackingCodingInterviewCpp/13.1.txt");
    int k = 4;
    printLastKLines(fin, k);
    cout<<"hahahhaha"<<endl;
    fin.close();
    return 0;
}
