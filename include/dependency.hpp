#pragma once

#include <string>

struct Dependency {
  std::string name;
  std::string version;

  Dependency (const std::string& name, const std::string& version);
  std::string getExternalProjStr ();
};
