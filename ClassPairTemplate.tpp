// Implement  ClassPairTemplate class constructor and print methods

template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 a, T2 b) {
  first = a;
  second = b;
}

template <typename T1, typename T2>
void Pair<T1, T2>::print() {
  std::cout << '(' << first << ", " << second << ")\n";
}
