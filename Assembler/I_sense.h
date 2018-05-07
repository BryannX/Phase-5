/*
* I_sense.h
* Gisi Musa
*/

#ifndef I_SENSE_H
#define I_SENSE_H
#include "allHeaders.h"

using namespace std;

class I_sense: public Instruction
{
    public:
        I_sense();
        int parse(string args, int line);
        string read();
        virtual ~I_sense();

    private:
        string dir;
        string cond;
        string on_fail;
};

#endif // I_SENSE_H