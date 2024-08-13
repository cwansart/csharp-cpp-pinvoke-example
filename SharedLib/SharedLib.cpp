// SharedLib.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "SharedLib.h"
#include <fstream>
#include <unordered_map>
#include <string>

using namespace std;

enum Types {
  NOR, FIR, WAT,
  ELE, GRA, ICE,
  FIG, POI, GRO,
  FLY, PSY, BUG,
  ROC, GHO, DRA,
  DAR, STE, FAI
};

static unordered_map<string, Types> s2t = {
  { "normal", NOR },
  { "fire", FIR },
  { "water", WAT },
  { "electric", ELE },
  { "grass", GRA },
  { "ice", ICE },
  { "fighting", FIG },
  { "poison", POI },
  { "ground", GRO },
  { "flying", FLY },
  { "psychic", PSY },
  { "bug", BUG },
  { "rock", ROC },
  { "ghost", GHO },
  { "dragon", DRA },
  { "dark", DAR },
  { "steel", STE },
  { "fairy", FAI },
};

Types strToTypes(string type) {
  if (type == "normal") return NOR;
  if (type == "fire") return FIR;
  if (type == "water") return WAT;
  if (type == "electric") return ELE;
  if (type == "grass") return GRA;
  if (type == "ice") return ICE;
  if (type == "fighting") return FIG;
  if (type == "poison") return POI;
  if (type == "ground") return GRO;
  if (type == "flying") return FLY;
  if (type == "psychic") return PSY;
  if (type == "bug") return BUG;
  if (type == "rock") return ROC;
  if (type == "ghost") return GHO;
  if (type == "dragon") return DRA;
  if (type == "dark") return DAR;
  if (type == "steel") return STE;
  if (type == "fairy") return FAI;
  return NOR;
}

// This is the constructor of a class that has been exported.
CSharedLib::CSharedLib()
{
}

void CSharedLib::sayHi() {
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
}

