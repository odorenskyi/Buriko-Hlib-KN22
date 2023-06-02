#include <iostream>
#include <fstream>

void loadFromFile(const std::string& filename, std::vector<Operator>& operators) {
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }

    std::string name, code;
    while (infile >> name >> code) {
        operators.push_back(Operator{name, code});
    }
}

void saveToFile(const std::string& filename, const std::vector<Operator>& operators) {
    std::ofstream outfile(filename);
    if (!outfile) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }

    for (const auto& op : operators) {
        outfile << op.name << " " << op.code << std::endl;
    }
}
