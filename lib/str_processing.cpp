//
// Created by vixu on 3/19/21.
//

#include "str_processing.h"

#include <sstream>

namespace str_processing {

auto split(std::string_view str, char delimiter) -> std::vector<std::string> {
    std::vector<std::string> lines;
    std::stringstream ss{str.data()};

    for (std::string line; std::getline(ss, line, delimiter);) {
      lines.push_back(line);
    }

    return lines;
}

auto search(
    std::string_view content,
    std::string_view query
) -> std::vector<std::string> {
    auto lines = split(content, '\n');

    auto iter = std::remove_if(lines.begin(), lines.end(), [&query](auto line) {
        return line.find(query) == std::string::npos;
    });

    lines.erase(iter, lines.end());

    return lines;
}

} // namespace str_processing