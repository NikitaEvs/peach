#ifndef SRC_UTIL_CONFIG_H_
#define SRC_UTIL_CONFIG_H_

#include <fstream>
#include <memory>

#include "json/json.hpp"

#define configFilePath "../resources/config/values.json"

class Config {
 private:
  nlohmann::json configJSON;

 protected:
  Config() = default;;
  static Config* configPtr;

 public:
  Config(Config &config) = delete;
  void operator = (const Config &) = delete;
  static std::shared_ptr<Config> getInstance();
  void readFile();

  /* Cell variables */

  /* Water */
  std::pair<int32_t, int32_t> getWaterWaterLevel();
  std::pair<int32_t, int32_t> getWaterPlantsCount();

  /* Forest */
  std::pair<int32_t, int32_t> getForestWaterLevel();
  std::pair<int32_t, int32_t> getForestPlantsCount();

  /* Steppe */
  std::pair<int32_t, int32_t> getSteppeWaterLevel();
  std::pair<int32_t, int32_t> getSteppePlantsCount();

  /* Tundra */
  std::pair<int32_t, int32_t> getTundraWaterLevel();
  std::pair<int32_t, int32_t> getTundraPlantsCount();

  /* Animals */
  /* Carnivore */
  /* very small */
  std::pair<int32_t, int32_t> getCarnivoreVerySmallAnimalAmount();
  std::pair<int32_t, int32_t> getCarnivoreVerySmallHealth();
  std::pair<int32_t, int32_t> getCarnivoreVerySmallProductivity();
  std::pair<int32_t, int32_t> getCarnivoreVerySmallWellBeing();
  std::pair<int32_t, int32_t> getCarnivoreVerySmallBiologyDev();

  /* small */
  std::pair<int32_t, int32_t> getCarnivoreSmallAnimalAmount();
  std::pair<int32_t, int32_t> getCarnivoreSmallHealth();
  std::pair<int32_t, int32_t> getCarnivoreSmallProductivity();
  std::pair<int32_t, int32_t> getCarnivoreSmallWellBeing();
  std::pair<int32_t, int32_t> getCarnivoreSmallBiologyDev();

  /* average */
  std::pair<int32_t, int32_t> getCarnivoreAverageAnimalAmount();
  std::pair<int32_t, int32_t> getCarnivoreAverageHealth();
  std::pair<int32_t, int32_t> getCarnivoreAverageProductivity();
  std::pair<int32_t, int32_t> getCarnivoreAverageWellBeing();
  std::pair<int32_t, int32_t> getCarnivoreAverageBiologyDev();

  /* big */
  std::pair<int32_t, int32_t> getCarnivoreBigAnimalAmount();
  std::pair<int32_t, int32_t> getCarnivoreBigHealth();
  std::pair<int32_t, int32_t> getCarnivoreBigProductivity();
  std::pair<int32_t, int32_t> getCarnivoreBigWellBeing();
  std::pair<int32_t, int32_t> getCarnivoreBigBiologyDev();
  
  /* very big */
  std::pair<int32_t, int32_t> getCarnivoreVeryBigAnimalAmount();
  std::pair<int32_t, int32_t> getCarnivoreVeryBigHealth();
  std::pair<int32_t, int32_t> getCarnivoreVeryBigProductivity();
  std::pair<int32_t, int32_t> getCarnivoreVeryBigWellBeing();
  std::pair<int32_t, int32_t> getCarnivoreVeryBigBiologyDev();

  /* Herbivore */
  /* very small */
  std::pair<int32_t, int32_t> getHerbivoreVerySmallAnimalAmount();
  std::pair<int32_t, int32_t> getHerbivoreVerySmallHealth();
  std::pair<int32_t, int32_t> getHerbivoreVerySmallProductivity();
  std::pair<int32_t, int32_t> getHerbivoreVerySmallWellBeing();
  std::pair<int32_t, int32_t> getHerbivoreVerySmallBiologyDev();

  /* small */
  std::pair<int32_t, int32_t> getHerbivoreSmallAnimalAmount();
  std::pair<int32_t, int32_t> getHerbivoreSmallHealth();
  std::pair<int32_t, int32_t> getHerbivoreSmallProductivity();
  std::pair<int32_t, int32_t> getHerbivoreSmallWellBeing();
  std::pair<int32_t, int32_t> getHerbivoreSmallBiologyDev();

  /* average */
  std::pair<int32_t, int32_t> getHerbivoreAverageAnimalAmount();
  std::pair<int32_t, int32_t> getHerbivoreAverageHealth();
  std::pair<int32_t, int32_t> getHerbivoreAverageProductivity();
  std::pair<int32_t, int32_t> getHerbivoreAverageWellBeing();
  std::pair<int32_t, int32_t> getHerbivoreAverageBiologyDev();

  /* big */
  std::pair<int32_t, int32_t> getHerbivoreBigAnimalAmount();
  std::pair<int32_t, int32_t> getHerbivoreBigHealth();
  std::pair<int32_t, int32_t> getHerbivoreBigProductivity();
  std::pair<int32_t, int32_t> getHerbivoreBigWellBeing();
  std::pair<int32_t, int32_t> getHerbivoreBigBiologyDev();

  /* very big */
  std::pair<int32_t, int32_t> getHerbivoreVeryBigAnimalAmount();
  std::pair<int32_t, int32_t> getHerbivoreVeryBigHealth();
  std::pair<int32_t, int32_t> getHerbivoreVeryBigProductivity();
  std::pair<int32_t, int32_t> getHerbivoreVeryBigWellBeing();
  std::pair<int32_t, int32_t> getHerbivoreVeryBigBiologyDev();
};

#endif //SRC_UTIL_CONFIG_H_
