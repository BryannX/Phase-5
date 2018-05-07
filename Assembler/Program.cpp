#include "allHeaders.h"
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

Program::Program(string filename) { 
    
            //Error in case of empty string
        if(filename.empty()){
            
            cout << "No file provided" <<endl;
            return;
            
        }

        static vector<string> lines;
        //Array of strings where lines of file will be stored.
        string current;
        //String to store current line of code.

        ifstream in;
        in.open(filename.c_str());

         //In case of corrupted file or invalid filename.
        if(!in){
            cout<< "Error opening file.\n" <<endl;   
        }

        while(in){
            getline(in, current);
            lines.push_back(current);

        }

        for (vector<string>::const_iterator i = lines.begin(); i != lines.end(); ++i){
            cout << *i << ' ' << endl;
        }
        
        in.close();

}


Program::~Program() {

}

void Program::error(string msg) { 

}

void  Program::process(vector<string> fileInput) { 
    
     //Creates appropriate instructions
        
        int count = 0;
        //Keeps track of the current line in the instruction file
    
        for (vector<string>::const_iterator i = fileInput.begin(); i != fileInput.end(); ++i){
            //cout << *i << ' ' << endl;
            
            //Take each line
            string sentence = *i; 
            
            //Increment count of the line
            count++;
            
            //Take the first word of each line
            string firstWord = sentence.substr(0, sentence.find(" "));           
            
            //See what instruction it is
            if(firstWord == "sense"){
                cout << "sense found" << endl;
                
                I_sense* one = new I_sense();
                one->parse(sentence, count);
           
            }else if(firstWord == "flip"){
                cout << "flip found" << endl;
                
                I_flip* two = new I_flip();
                two->parse(sentence, count);

            
            }else if(firstWord == "direction"){
                cout << "direction found" << endl;
                
                I_direction* three = new I_direction();
                three->parse(sentence, count);
            
            }else if(firstWord == "turn"){
                cout << "turn found" << endl;
                
                I_turn* four = new I_turn();
                four->parse(sentence, count);
            
            }else if(firstWord == "mark"){
                cout << "mark found" << endl;
                
                I_mark* five = new I_mark();
                five->parse(sentence, count);
            
            }else if(firstWord == "unmark"){
                cout << "unmark found" << endl;
                
                I_unmark* six = new I_unmark();
                six->parse(sentence, count);
                
            }else if(firstWord == "pickup"){
                cout << "pickup found" << endl;
                                
                I_pickup* seven = new I_pickup();
                seven->parse(sentence, count);
                
            }else if(firstWord == "move"){
                cout << "move found" << endl;
                
                I_move* eight = new I_move();
                eight->parse(sentence, count);
                
            }else if(firstWord == "drop"){
                cout << "drop found" << endl;
                
                I_drop* nine = new I_drop();
                nine->(sentence, count);
                
            }else{
		//Default Case: Label and goto lines
                I_default* a = new I_default();
                a->parse(sentence, count);
            }
                    
        }
                

}

void Program::Export() { 

}
