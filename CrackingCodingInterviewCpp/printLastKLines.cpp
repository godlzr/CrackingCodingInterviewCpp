//
//  printLastKLines.cpp
//  CrackingCodingInterviewCpp
//
//  Created by  Zhongrui Li on 2015-04-08.
//  Copyright (c) 2015  Zhongrui Li. All rights reserved.
//

#include "printLastKLines.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printLastKLines(ifstream &fin, int k){
    string *line = new string[k];
    int lines = 0;
    string tmp;
    while(getline(fin, tmp)){
        line[lines%k] = tmp;
        ++lines;
    }
    int start, cnt;
    if(lines < k){
        start = 0;
        cnt = lines;
    }
    else{
        start = lines%k;
        cnt = k;
    }
    for(int i=0; i<cnt; ++i)
        cout<<line[(start+i)%k]<<endl;
}