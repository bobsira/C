#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  /* code */
  int rating_count;
  double bonus = 0.0;
  double count = 0.0;
  scanf("%d",&rating_count);
  int rating[rating_count];

  //my input
  for (size_t i = 0; i < rating_count; i++) {
    scanf("%d", &rating[i]);
  }

for (size_t i = 0; i < rating_count; i++) {
  /* code */
  if (rating[i] >= 90) {
    /* code */
    bonus+=rating[i];
    count++;
  }
}

double results = bonus/count;
//printf("%.2f\n", ceilf(results * 100) / 100);
printf("%.2f\n", roundf(results * 100) / 100);
// printf("%.2f\n", results);
// results = round(results);
// printf("%0.2f\n", round(results));
//float rounded_up = ceilf(results * 100) / 100;      /* Result: 37.78 */
//printf("%f\n", rounded_up);

  return 0;
}
