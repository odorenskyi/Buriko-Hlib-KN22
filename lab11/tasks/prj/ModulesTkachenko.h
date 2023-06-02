#ifndef MODULESTKACHENKO_H_INCLUDED
#define MODULESTKACHENKO_H_INCLUDED

#include <vector>
#include <string>

void addOperator(const std::string& name, const std::string& code, std::vector<Operator>& operators);
void removeOperator(const std::string& name, const std::string& code, std::vector<Operator>& operators);

#endif // MODULESTKACHENKO_H_INCLUDED
