#ifndef MODULESBURIKO_H_INCLUDED
#define MODULESBURIKO_H_INCLUDED

#include <vector>
#include <string>

void searchByCode(const std::string& code, const std::vector<Operator>& operators);
void searchByName(const std::string& name, const std::vector<Operator>& operators);
void displayAllOperators(const std::vector<Operator>& operators);

#endif // MODULESBURIKO_H_INCLUDED
