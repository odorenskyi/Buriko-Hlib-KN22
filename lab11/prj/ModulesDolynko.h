#ifndef MODULESDOLYNKO_H_INCLUDED
#define MODULESDOLYNKO_H_INCLUDED

#ifndef MODULESDOLYNKO_H
#define MODULESDOLYNKO_H

#include <vector>
#include <string>

struct Operator {
    std::string name;
    std::string code;
};

void loadFromFile(const std::string& filename, std::vector<Operator>& operators);
void saveToFile(const std::string& filename, const std::vector<Operator>& operators);

#endif
#endif // MODULESDOLYNKO_H_INCLUDED
