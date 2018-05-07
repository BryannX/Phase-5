/*
* Program.h
* Gisi Musa
*/

#ifndef PROGRAM_H
#define PROGRAM_H
#include "allHeaders.h"

using namespace std;

class Program
{
    public:
        Program(string filename);
        void error(string msg);
        void  process();
        void Export();
        virtual ~Program();

    private:
        int line = 0;
};

#endif // PROGRAM_H