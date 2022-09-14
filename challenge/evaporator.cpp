using namespace std;
class Evaporator
{

  public:
  static int evaporator(double content, double evap_per_day, double threshold);
};

int Evaporator::evaporator(double content, double evap_per_day, double threshold) {
  int days = 0;
  double threshold_in_ml = content * (threshold / 100);
  
  while (content > threshold_in_ml) {
    content *= 1 - (evap_per_day / 100);
    days++;
  }

  return days;
}