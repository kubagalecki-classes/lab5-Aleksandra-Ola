#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
     // Twoja implementacja tutaj
  std::vector< char > ludzik(people.size());
  int i=0;
  for (std::list< Human >::iterator it = people.end(); it != people.begin();)
  { 
    --it;
    it->birthday();
    if(it->isMonster()==true)
    ludzik.push_back('n');
    else
    ludzik.push_back('y');
}
    return ludzik; 
}
