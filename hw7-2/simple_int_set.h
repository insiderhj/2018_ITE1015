#ifndef __SIMPLE_INT_SET__
#define __SIMPLE_INT_SET__

#include <set>
#include <string>

std::set<int> SetIntersection(const std::set<int>&, const std::set<int>&);
std::set<int> SetUnion(const std::set<int>&, const std::set<int>&);
std::set<int> SetDifference(const std::set<int>&, const std::set<int>&);

#endif
