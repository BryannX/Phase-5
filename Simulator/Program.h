#ifndef PROGRAM_H
#define PROGRAM_H

#include <string>
#include "Bug.h"

class Program{
private:
    int id;
public:
    Program(const std::string& filename);
    void step(Bug b);
};
#endif /* PROGRAM_H */

