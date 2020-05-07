int past(int h, int m, int s) {
  int result = 0;
  int hours_to_ms = h * 60 * 60 * 1000;
  int mins_to_ms = m * 60 * 1000;
  int sec_to_ms = s * 1000;
  result = sec_to_ms + mins_to_ms + hours_to_ms;
  return result;
}