import 'dart:io';

main() {
  int i;
  int j = int.parse(stdin.readLineSync());
  for (i = 0; i < 10; i++) {
    print("N[$i] = $j");
    j = j * 2;
  }
}
