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
    [[nodiscard]] auto get_filename() const -> std::string_view;
    [[nodiscard]] auto get_query() const -> std::string_view;

   private:
    std::string_view filename;
    std::string_view query;
};

} // namespace config

#endif  // MINIGREP_CONFIG_HPP
