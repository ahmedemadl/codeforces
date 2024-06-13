#include <bits/stdc++.h>

using namespace std;

// Function to approximate a double value to a fraction
void approximateFraction(double value, long long &numerator,
                         long long &denominator,
                         long long precision = 1000000) {
  long long lower_numerator = 0, lower_denominator = 1;
  long long upper_numerator = 1, upper_denominator = 0;
  numerator = 1;
  denominator = 1;

  while (true) {
    long long mediant_numerator = lower_numerator + upper_numerator;
    long long mediant_denominator = lower_denominator + upper_denominator;

    if (mediant_denominator * (value + 1.0 / precision) < mediant_numerator) {
      upper_numerator = mediant_numerator;
      upper_denominator = mediant_denominator;
    } else if (mediant_numerator <
               mediant_denominator * (value - 1.0 / precision)) {
      lower_numerator = mediant_numerator;
      lower_denominator = mediant_denominator;
    } else {
      numerator = mediant_numerator;
      denominator = mediant_denominator;
      break;
    }
  }

  // Simplify the fraction using GCD
  long long gcd_value = gcd(numerator, denominator);
  numerator /= gcd_value;
  denominator /= gcd_value;
}
int main() {
  double Y, W, max = 0;
  double f = 0;
  cin >> Y >> W;
  if (Y >= W) {
    max += Y;
  } else {
    max += W;
  }
  if (max == 0) {
    cout << "1/1";
    return 0;
  } else {
    f += (7 - max) / 6;
  }
  long long numerator, denominator;
  approximateFraction(f, numerator, denominator);

  cout << numerator << "/" << denominator << endl;

  return 0;
}
