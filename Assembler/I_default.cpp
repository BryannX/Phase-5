/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "allHeaders.h"

using namespace std;

I_default(){
    
};

int parse(string args, int line){
    
    map<int, string> labelPos;
    
    labelPos[line] = args;
    
    cout << labelPos[line] << " parse here" << endl;
    
    return line;
};

string read(){
       
    return string();
};

