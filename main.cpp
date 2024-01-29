#include <iostream>
#include <string>

#include "queue.h"

void print(QueueEntry item) { std::cout << item << "\n"; }

int getIndex(const char arr[], int size, char item) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == item) {
      return i;
    }
  }

  return -1;
}

int romanToInt(std::string s) {
  const char symbols[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
  const int values[] = {1, 5, 10, 50, 100, 500, 1000};

  std::cout << s.size() << "\n";

  int result = 0;

  for (int i = 1; i < (int)s.size(); i += 2) {
    int curi = getIndex(symbols, 7, s[i]);
    int nexti = getIndex(symbols, 7, s[i - 1]);

    std::cout << "char: " << s[i] << "\t value: " << values[curi] << "\tindex: " << curi << "\n";
    std::cout << "char: " << s[i - 1] << "\t value: " << values[nexti] << "\tindex: " << nexti
              << "\n";
    std::cout << "**********\n";
    if (nexti <= curi) {
      result += values[nexti] + values[curi];
      std::cout << "result: " << result << "\n";
      std::cout << "**********\n";
    } else {
      result += values[nexti] - values[curi];
    }
  }

  return result;
}

int main() {
  // Queue q;

  // initializeQueue(&q);

  // append(&q, 10);
  // append(&q, 20);
  // append(&q, 30);
  // append(&q, 40);
  // append(&q, 50);

  // int num = 0;

  // traverseQueue(&q, print);

  std::cout << romanToInt("LVIII") << "\n";

  return 0;
}