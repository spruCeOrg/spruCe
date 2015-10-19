#include "dependency.hpp"

Dependency::Dependency (const std::string& _name, const std::string& _version): name { _name }, version { _version } {};

std::string Dependency::getExternalProjStr () {
  return std::string { "hello" };
};
