//
// Created by vixu on 3/19/21.
//

#include "config.hpp"

#include <stdexcept>

namespace config {

Config::Config(int argc, char* argv[]) {
    if (argc < 3) {
        throw std::runtime_error{"Not enough arguments"};
    }

    this->filename = argv[1];
    this->query = argv[2];
};

auto Config::get_filename() -> std::string_view {
    return this->filename;
}

auto Config::get_query() -> std::string_view {
    return this->query;
}

}