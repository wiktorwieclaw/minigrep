//
// Created by vixu on 3/19/21.
//

#ifndef MINIGREP_STR_PROCESSING_H
#define MINIGREP_STR_PROCESSING_H

#include <vector>
#include <string>

namespace str_processing {

auto split(std::string_view str, char delimiter) -> std::vector<std::string>;

auto search(
    std::string_view content,
    std::string_view query
) -> std::vector<std::string>;

} // namespace str_processing

#endif // MINIGREP_STR_PROCESSING_H
