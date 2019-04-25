#include <vector>
#include "Simple.hpp"
#include "../utilities/Ray.hpp"

Simple::Simple(Camera* c_ptr, ViewPlane* v_ptr) : Sampler(c_ptr, v_ptr) {}

Simple* Simple::clone() const { return nullptr; }

std::vector<Ray> Simple::get_rays(int px, int py) const {
  std::vector<Ray> temp;
  return temp;
}
