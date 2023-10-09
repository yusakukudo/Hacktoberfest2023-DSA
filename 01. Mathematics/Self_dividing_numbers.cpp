#include <bits/stdc++.h>

bool self_div(int n) {
  int s = n;
  int c = 0;
  while (s != 0) {
    int digit = s % 10;
    if (digit == 0 || n % digit != 0) {
      return false;
    }
    s /= 10;
    c++;
  }
  return c == floor(log10(n)) + 1;
}

vector<int> findAllSelfDividingNumbers(int lower, int upper) {
  vector<int> sdiv;
  if (lower <= upper) {
    for (int i = lower; i <= upper; i++) {
      if (self_div(i)) {
        sdiv.push_back(i);
      }
    }
  }
  return sdiv;
}
