#include <string>
#include "Pet.h"

using namespace std;

// Put your constructor code here!
// default constructor
Pet::Pet()
{
  this->name = "Rover";
  this->birth_year = 2018;
  this->type = "dog";
  this->owner_name = "Wade";
}

Pet::Pet(string n, int by, string t, string on)
{
  this->name = n;
  this->birth_year = by;
  this->type = t;
  this->owner_name = on;
}

void Pet::setName(string newName) {
  name = newName;
}

void Pet::setBY(int newBY) {
  birth_year = newBY;
}

void Pet::setType(string newType) {
  type = newType;
}

void Pet::setOwnerName(string newName) {
  owner_name = newName;
}

string Pet::getName() {
  return name;
}

int Pet::getBY() {
  return birth_year;
}

string Pet::getType() {
  return type;
}

string Pet::getOwnerName() {
  return owner_name;
}
