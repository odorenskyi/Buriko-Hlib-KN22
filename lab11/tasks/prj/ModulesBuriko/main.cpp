#include <algorithm>
#include <iostream>

void searchByCode(const std::string& code, const std::vector<Operator>& operators) {
    auto it = std::find_if(operators.begin(), operators.end(), [&](const Operator& op) {
        return op.code == code;
    });

    if (it != operators.end()) {
        std::cout << "Operator: " << it->name << ", Code: " << it->code << std::endl;
    } else {
        std::cout << "Operator with code: " << code << " not found" << std::endl;
    }
}

void searchByName(const std::string& name, const std::vector<Operator>& operators) {
    auto it = std::find_if(operators.begin(), operators.end(), [&](const Operator& op) {
        return op.name == name;
    });

    if (it != operators.end()) {
        std::cout << "Operator: " << it->name << ", Code: " << it->code << std::endl;
    } else {
        std::cout << "Operator named: " << name << " not found" << std::endl;
    }
}

void displayAllOperators(const std::vector<Operator>& operators) {
    for (const auto& op : operators) {
        std::cout<< "Operator: "<< op.name<< ", Code: "<< op.code<<std::endl;
    }
}
