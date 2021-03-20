#include <fstream>
#include <iostream>

#include "config.hpp"
#include "str_processing.h"

void run(const config::Config& config) {
    std::ifstream file;
    file.open(config.get_filename().data(), std::ios::in);

    if (!file.is_open()) {
        throw std::runtime_error("Cannot open file");
    }

    // read file content to string
    std::string content{
        std::istreambuf_iterator<char>(file),
        std::istreambuf_iterator<char>()
    };

    auto lines = str_processing::search(content, config.get_query());

    for (auto& line : lines) {
        std::cout << line << std::endl;
    }
}

auto main(int argc, char* argv[]) -> int {
    try {
        const config::Config config{argc, argv};
        run(config);
    } catch (std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
}
