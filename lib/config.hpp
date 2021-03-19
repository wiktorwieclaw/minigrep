//
// Created by vixu on 3/19/21.
//

#ifndef MINIGREP_CONFIG_HPP
#define MINIGREP_CONFIG_HPP

#include <string_view>

namespace config {

class Config {
   public:
    Config(int argc, char* argv[]);
    auto get_filename() -> std::string_view;
    auto get_query() -> std::string_view;

   private:
    std::string_view filename;
    std::string_view query;
};

} // namespace config

#endif  // MINIGREP_CONFIG_HPP
