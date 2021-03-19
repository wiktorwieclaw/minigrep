//
// Created by vixu on 3/19/21.
//

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "str_processing.h"

using namespace testing;

TEST(StrProcessing, ShallSplit) {
  std::string str = "a\nbb\nccc\n";
  auto result = str_processing::split(str, '\n');

  ASSERT_THAT(result, ElementsAre("a", "bb", "ccc"));
}

TEST(StrProcessing, ShallFind) {
  std::string str = "aaa\naaabbb\nbbb";
  auto result = str_processing::search(str, "bbb");

  ASSERT_THAT(result, ElementsAre("aaabbb", "bbb"));
}